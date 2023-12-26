#include<iostream>
#include<queue>

using namespace std;

int main()
{
	queue<string> q;
	
	q.push("Love");
	q.push("babbar");
	q.push("Kumar");
	
	cout << "before pop size -> " << q.size() << endl;
	
	cout << "First element -> " << q.front() << endl;
	q.pop();
	cout << "First element -> " << q.front() << endl;
	
	cout << "after pop size -> " << q.size() << endl;
	 
}
