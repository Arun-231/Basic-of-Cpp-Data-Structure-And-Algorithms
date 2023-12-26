#include<iostream>
using namespace std;

// Multilevel Inheritance
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

class GermanShepherd : public Dog{
	
};

int main()
{
	GermanShepherd g;
	g.speek();
	
	
	return 0;
}
