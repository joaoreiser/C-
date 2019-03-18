#include <iostream>
#include <vector>
#include <string>
#include <memory>

using std::cout;
using std::endl;
using std::cin;
using std::vector;
using std::string;

/*
	SHARED POINTERS
-> points to an object on the heap
-> not unique. Many shared pointers can point to the same object
-> CAN be assigned and copied
-> CAN be moved
-> DOESN'T support managing arrays
-> Shared Pointers are destroyed when the count of
   in use pointers is zero	
*/

/*
{
	std::shared_ptr<int> p1{new int{100}};	
	cout << *p1 << endl; //100
	*p1 = 200;
	cout << *p1 << endl; //200
} //out of scope -> auto deleted


=>	USEFUL METHODS
-> use_count - returns the number of shared_ptr objects

	std::shared_ptr<int> p1 {new int{100}};
	cout << p1.use_count() << endl; //1
	
	std::shared_ptr<int> p2 {p1};
	cout << p1.use_count() << endl; //2
	
	p1.reset(); //decrement use_count; p1 is nulled out
	cout << p1.use_count() << endl; //0
	cout << p2.use_count() << endl; //1
*/

/*
	std::shared_ptr<Account> p1 {new Account{"Joao"}};
	cout << *p1 << endl;
	
	vector<std::shared_ptr<int>> vec;
	std::shared_ptr<int> ptr{new int{100}};
	
	vec.push_back(ptr); //OK - copy is allowed with shared_ptr
	cout << ptr.use_count() << endl; //2 -> original + copy ptr
*/

/*
=> MORE EFFICIENT SHARED_PTR CREATION
	std::shared_ptr<int> p1 = make_shared<int>(100); //use_count : 1
	//more efficient with make_shared. No use of "new" keyword 
	std::shared_ptr<int> p2 {p1}; //use_count : 2;
	//-> creates as a copy
	std::shared_ptr<int> p3; 
	//-> creates empty (nullptr)
	p3 = p1; //use_count : 3;
*/

class Test{
private:
	int data;
public:
	Test() : data{0}{cout << "Constructor" << endl;}
	Test(int data) : data{data}{cout << "Constructor2: " << data << endl;}
	int get_data() const {return data;}
	~Test(){cout << "Destructor: " << data << endl;}
};

void func(std::shared_ptr<Test> i){
	cout << "In Func Use_Count: " << i.use_count() << endl;
}

int main()
{
	cout << "\n--------------------------------------------------------\n" << endl;
	
	std::shared_ptr<int> p1{new int{100}};
	cout << "Use_Count: " << p1.use_count() << " Content p1: " << *p1 << endl;
	
	std::shared_ptr<int> p2 {p1};
	cout << "Use_Count: " << p2.use_count() << " Content p1: " << *p1 << endl;

	p1.reset();
	if(!p1){ //p1 == nullptr
		cout << "p1 is nullptr => " << "Use_Count: " << p1.use_count() << endl;
		cout << "Use_Count: " << p2.use_count() << " Content p2: " << *p2 << endl;
	}
	
	cout << "\n--------------------------------------------------------\n" << endl;

	cout << "--Create ptr--" << endl;
	std::shared_ptr<Test> ptr = std::make_shared<Test>(1000);
	func(ptr);
	cout << "Use_Count: " << ptr.use_count() << endl;
	{
		cout << "--Create ptr1--" << endl;
		std::shared_ptr<Test> ptr1{ptr};
		cout << "Use_Count: " << ptr.use_count() << endl;
		{
			cout << "--Create ptr2--" << endl;
			std::shared_ptr<Test> ptr2 = ptr;
			cout << "Use_Count: " << ptr.use_count() << endl;
			cout << "--Reset ptr--" << endl;
			ptr.reset();
		}
		cout << "--ptr2 out of scope--" << endl;
		cout << "Use_Count ptr: " << ptr.use_count() << endl;
		cout << "Use_Count ptr1: " << ptr1.use_count() << endl;
	}
	cout << "--ptr1 out of scope--" << endl;
	cout << "Use_Count: " << ptr.use_count() << endl;

	cout << "\n--------------------------------------------------------\n" << endl;
	
	std::shared_ptr<Test> t1 = std::make_shared<Test>(1000);
	std::shared_ptr<Test> t2 = std::make_shared<Test>(2000);
	std::shared_ptr<Test> t3 = std::make_shared<Test>(3000);
	
	vector<std::shared_ptr<Test>> vec;
	vec.push_back(t1);
	vec.push_back(t2);
	vec.push_back(t3);
	
	cout << "In Loop" << endl;
	for(const auto &v : vec){ //use as &. Otherwise, a copy will be made
		cout << "Content: " << v->get_data() << " Use_Count:  " << v.use_count() << endl;
	}
	cout << "Out Loop" << endl;
	
	return 0;
}
