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
		
		// Destructor
		~Hero(){
			cout << "Destructor bhai called" << endl;
		}
	};

int main()
{
	// static
	Hero a;
	
	// dynamic
	Hero *b = new Hero();
	
	// manually called destructor
	delete b;
	
	
	return 0;
}
