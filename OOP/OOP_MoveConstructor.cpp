#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
L-Value (&) and R-Value (&&) Reference

//a literal or the result of a operation has a temporary
//address before it's used or assigned to a variable.
//This address can be referenced with &&

-> L-Value
	int x{100};

	void func(int &num);
	
	func(x); 	//runs ok
	func(200); 	//error -> a literal is a R-Value. Can't be referenced by &

-> R-Value
	int x{100};

	void func(int &&num);

	func(x); 	//error	-> func expects a r-value (literal)
	func(200); 	//runs ok

-> Overload
	int x{100};

	void func(int &num);
	void func(int &&num);

	func(x); 	//runs ok
	func(200); 	//runs ok

*/

/*
MOVE CONSTRUCTOR
	//The DEEP COPY constructor implicates in high overhead
	//The move constructor copy the address of the resource from source to current object
	//The source pointer must be nulled
	//Moving the addresses of a object is much more efficient

Sintax:
	My_Class::My_Class(My_Class &&source) noexcept; 
	
	My_Class::My_Class(My_Class &&source) noexcept
		: data{source.data}{source.data = nullptr;}
		
	//the compiler will try to use the safer tools to execute the code. The COPY CONSTRUCTOR has
	//a better exceptions cover, so the compiler will prioritize it, and the benefits of using the
	//MOVE CONSTRUCTOR will be lost. To "force" the compiler to use the MOVE the "noexcept" is used.
*/

/////////////NORMAL DEEP COPY PROGRAM/////////////
/*
class Move{
private:
	int *data;
public:
	Move(int d);
	~Move();
	Move(const Move &source);
	
	void set_data(int d){*data = d;}
	int get_data(){return *data;}
};

Move::Move(int d){
	data = new int;
	*data = d;
	cout << "Constructor Called " << *data << endl;
}

Move::~Move(){
	cout << "Destructor Called " << *data << endl;
	delete data;	
}

Move::Move(const Move &source)
	:Move(*source.data)
	{cout << "Deep Copy Constructor Called " << *source.data << endl;}
*/

/////////////WITH MOVE CONSTRUCTOR PROGRAM/////////////

class Move{
private:
	int *data;
public:
	Move(int d);
	~Move();
	Move(const Move &source);
	Move(Move &&source) noexcept;
	
	void set_data(int d){*data = d;}
	int get_data(){return *data;}
};

Move::Move(int d){
	data = new int;
	*data = d;
	cout << "Constructor Called " << *data << endl;
}

Move::~Move(){
	cout << "Destructor Called " << endl;
	delete data;	
}

Move::Move(const Move &source)
	:Move(*source.data){
		cout << "Deep Copy Constructor Called " << *source.data << endl;
	}

Move::Move(Move &&source) noexcept
	:data(source.data){
		source.data = nullptr;
		cout << "Move Constructor Called " << *data << endl;
	}
	 
int main()
{
	vector<Move> vec;
	
	vec.push_back(Move{10});
	vec.push_back(Move{20});
	vec.push_back(Move{30});
	vec.push_back(Move{40});
	vec.push_back(Move{50});
	vec.push_back(Move{60});
	vec.push_back(Move{70});
	
	//as the vector grows, each push_back inside represents
	//several deep copy constructor calls, because all the vector
	//needs to be reallocated to fit the new data inside. This is
	//a massive overhead. The MOVE CONSTRUCTOR is used to fix it.
	
	return 0;
}
