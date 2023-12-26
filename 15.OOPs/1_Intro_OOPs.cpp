#include<iostream>
#include<string.h>
using namespace std;

class Hero
	{
		// properties
		private:
		int health;
		public:
		char *name;
		char level;
		static int timeToComplete;
		// Default Constructor 
		Hero(){
			cout << "Default Constructor  Called" << endl;
			name = new char[100];
		}
		
		// Parametarised Constructor
		Hero(int health){
		//	cout << "this -> " << this << endl;
			this -> health = health;
		}
		
		Hero(int health, char level){
			this -> level = level;
			this -> health = health; 
		}
		
		// Copy constructor 
		Hero(Hero& temp){
			char *ch = new char[strlen(temp.name) + 1];
			strcpy(ch, temp.name);
            this -> name = ch; 
						
			cout << "Copy Constructor called" << endl;
			this->health = temp.health;
			this->level = temp.level;
		}
		
		void print(){
		cout << endl;
		cout << "[ Name: " << this->name << " , ";
		cout << "Health: " << this->health << " , ";
		cout << "Level: " << this -> level << " ]";
		cout << endl;
	    }
		
		// getter setter method
		int getHealth(){
			return health;
		}
		
		char getLevel(){
			return level;
		}
		
		void setHealth(int h)
		{
			health = h;
		}
		
		void setLevel(char ch)
		{
			level = ch;
		}
		
		void setName(char name[])
		{
			strcpy(this->name, name);
		}
		
		static int random(){
			return timeToComplete;
		}
	};

int Hero :: timeToComplete = 5;

int main()
{
	
//	cout << Hero :: timeToComplete << endl;
	cout << Hero :: random() << endl;
	
/*	Hero a;
	cout << a.timeToComplete << endl;
	
	Hero b;
	b.timeToComplete = 10;
	cout << a.timeToComplete << endl;
	cout << b.timeToComplete << endl;
	
*/	
	
	
/*	Hero hero1;
	hero1.setHealth(80);
	hero1.setLevel('D');
	char name[7] = "Babbar";
	hero1.setName(name);
	
	//hero1.print();
	
	// use default copy constructor
	
	Hero hero2(hero1);
//	hero2.print();
	hero1.name[0] = 'G';
	hero1.print();
	
	hero2.print();
	
	
	hero1 = hero2;
	
	hero1.print();
	
	hero2.print();
	
	
*/	
	
//    Hero hero2 = hero1;
	
	
	
	
/*	Hero suresh(70, 'C');
	suresh.print();
*/
/*	
	suresh.getHealth(70);
	suresh.getLevel('C');
*/
	
	// Copy Constructor
/*	Hero R(suresh);
	R.print();
	
*/	
	
	
	
	
	
	
	
	
	
/*
	// object created statically
	//cout << "Hi" << endl;
	Hero ramesh(10);
	//cout << "Address of ramesh -> " << &ramesh << endl;
	//ramesh.getHealth();
	ramesh.print();
	//cout << "Hello" << endl;
	
	// object created dynamically
	
	Hero *h = new Hero(11);
	h -> print();
	
	Hero temp(22, 'B');
	temp.print();
*/	
	
	

/*	
	//static allocation
	
	Hero a;
	a.setHealth(80);
	a.setLevel('B');
	cout << "Level is " << a.level << endl;
	cout << "Health is " << a.getHealth() << endl;
	// dynamically allocation
	
	Hero *b = new Hero;
	b->setHealth(70);
	b->setLevel('A');
	cout << "Level is " << (*b).level << endl;
	cout << "health is " << (*b).getHealth() << endl;
	
	cout << "Level is " << b->level << endl;
	cout << "health is " << b->getHealth() << endl;   
*/
	 
	// creation of object
	
/*	Hero ramesh;
	cout << "Size of ramesh is: " << sizeof(ramesh) << endl;
	cout << "Ramesh health is: " << ramesh.getHealth() << endl;
	// use setter
	ramesh.setHealth(70);
	ramesh.level = 'A';
	
	//cout << "size: " << sizeof(h1) << endl;
	
	
	cout << "Health is: " << ramesh.getHealth() << endl;
	cout << "Level is: " << ramesh.level << endl;
*/
	return 0;
}
