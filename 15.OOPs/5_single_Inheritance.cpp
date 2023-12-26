#include<iostream>
using namespace std;

// Single Inheritance
class Animal{
	public:
		int age;
		int weight;
		
	public:
		void speek(){
			cout << "Speeking" << endl;
		}
};

class Dog: public Animal{
	
};

int main()
{
	Dog d;
	d.speek();
	cout << d.age << endl;
	
	return 0;
}
