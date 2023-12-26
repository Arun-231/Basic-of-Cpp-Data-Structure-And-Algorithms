#include<iostream>
using namespace std;
// Resolve Ambiguty problem using scope resolution(::) oprator

class A{
	public:
		void func(){
			cout << "I am A" << endl;
		}
};

class B{
	public:
		void func(){
			cout << "I am B" << endl;
		}
};

class C: public A, public B{
	
};


int main()
{
	C obj;
	obj.A :: func();
	obj.B :: func();
	
	
	return 0;
}
