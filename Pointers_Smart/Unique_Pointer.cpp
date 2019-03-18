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
	UNIQUE POINTER (unique_ptr)
	
-> unique. Can only have one unique_prt pointing to the object on the heap
-> owns what it points to
-> cannot be copied or assigned
-> CAN be moved
-> when pointer is destroyed, the content is destroyed too
*/

/*
{
	std::unique_prt<int> p1{new int{100}};
	cout << *p1 << endl; //100
	*p1 = 200;
	cout << *p1 << endl; //200	
} //destroyed automatically when out of scope

-> USEFUL METHODS
	ptr_name.get(); -> return the address
	ptr_name.reset(); -> nullptr
	
	if(ptr_name){} -> verifies if the pointer is initialized (not nullptr)

		
-> 	IMPORTANT DETAILS
	
	vector<std::unique_prt<int>> vec;
	std::unique_prt<int> ptr {new int{100}};
	
	vec.push_back(ptr); //ERROR - copy not allowed
	
	vec.push_back(std::move(ptr)); //OK

-> MORE EFFICIENT UNIQUE_PTR CREATION
	
	std::unique_ptr<int> p1 = make_unique<int>(100);
	
	std::unique_prt<Account> p2 = make_unique<Account>("Joao", 1000);
	
	auto p3 = make_unique<Player>("Hero", 100, 100);
	
	//three variations of make_unique use for unique_prt creation
	//no need of NEW keyword
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

int main()
{	
	Test *ptr1 = new Test(1000);
	std::unique_ptr<Test> ptr2 = std::make_unique<Test>(2000);
	std::unique_ptr<Test> ptr3{new Test{3000}};
	auto ptr4 = std::make_unique<Test>(4000);
	
	cout << ptr1->get_data() << endl;
	cout << ptr2->get_data() << endl;
	cout << ptr3->get_data() << endl;
	cout << ptr4->get_data() << endl;
	
	std::unique_ptr<Test> ptr5;
	ptr5 = std::move(ptr4);
	////when the pointer is moved to a new position,
	////the old position will be automatically null	
	if(!ptr4){ //if ptr4 is nullptr
		cout << "ptr4 is null. ptr5 is: " << ptr5->get_data() << endl;
	}
	////without delete, ptr2 will never be destroyed (Memory Leak)
	////ptr1 destructor is automatically called
	delete ptr1;
	
	
	//std::unique_ptr<Account> p_c_account = std::make_unique<Checking_Account>("Joao", 1000);
	
	//vector<std::unique_prt<Account>> vec; -> vector of unique pointers of Account
	//vec.push_back(make_unique<Checking_Account>("Joao", 5000); -> create and append pointer to vec
	//vec.push_back(make_unique<Savings_Account>("John", 4000, 2); -> create and append pointer to vec
	//vec.push_back(make_unique<Trust_Account>("Jack", 3000, 3); -> create and append pointer to vec
	
	////=> v NEEDS TO BE BY REFERENCE (&), BECAUSE 
	////   NO COPY IS ALLOWED
	//for(const auto &v : vec){
	//    cout << *v << endl;	
	//}
	
	return 0;
}
