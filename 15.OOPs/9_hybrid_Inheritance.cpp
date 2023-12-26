#include<iostream>
using namespace std;

// Hybrid Inheritance
class A{
	public:
		void fun1(){
			cout << "Class A" << endl;
		}
};

class D{
	public:
		void fun2(){
			cout << "Class D" << endl;
		}
};

class B: public A{
	public:
		void fun3(){
			cout << "Class B Inherit Class A" << endl;
		}
};

class C: public A, public D{
	
};



int main()
{
	A obj1;
	obj1.fun1();
	D obj2;
	obj2.fun2();
	B obj3;
	obj3.fun1();
	obj3.fun3();
	
	C obj4;
	obj4.fun1();
	obj4.fun2();
	
	
	return 0;
}
