#include<iostream>
using namespace std;

// function overloading 

class A{
	public:
	void sayHello(){
		cout << "Hello Love Babbar" << endl;
	}
		
	int sayHello(char name){
		cout << "Hello love" << endl;
		return 1;
	}
	
	void sayHello(string name){
		cout << "Hello " << name << endl;
	}
};

int main()
{
	A obj;
	obj.sayHello("A");
	
	return 0;
}
