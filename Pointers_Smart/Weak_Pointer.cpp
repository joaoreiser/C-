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
	WEAK POINTERS
-> provides a non-owning weak "reference"
-> points to an object on the heap
-> created from a shared_ptr
-> does NOT change the use_count
*/

class B;

class A{
	std::shared_ptr<B> p_b;
public:
	void set_B(std::shared_ptr<B> &b){
		p_b = b;
	}
	A(){cout << "Constr A" << endl;}
	~A(){cout << "Destr A" << endl;}
};

class B{
	//std::shared_ptr<A> p_a; 
	//-> if the pointer was shared_ptr, there would be 
	//a lock circle between A and B and the destructors
	//would never be called, leaking the memory
	std::weak_ptr<A> p_a;
public:
	void set_A(std::shared_ptr<A> &a){
		p_a = a;
	}
	B(){cout << "Constr B" << endl;}
	~B(){cout << "Destr B" << endl;}
};

int main()
{
	std::shared_ptr<A> a = std::make_shared<A>();
	std::shared_ptr<B> b = std::make_shared<B>();
	
	a->set_B(b);
	b->set_A(a);
	
	return 0;
}
