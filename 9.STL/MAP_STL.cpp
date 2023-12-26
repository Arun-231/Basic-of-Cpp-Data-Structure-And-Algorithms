#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<int, string> m;
	
	m[1] = " Babbar";
	m[2] = "Love";
	m[13] = "Kumar";
	
	m.insert({5, "Bheem"});
	cout << "before erase" << endl;
	
	for(auto i:m)
	{
		cout << i.first << " " << i.second << endl;
	}
	
	cout << "-13 is present or not -> " << m.count(-13) << endl;
	//m.erase(13);
	cout << "after erase" << endl;
	for(auto i:m)
	{
		cout << i.first << " " << i.second << endl;
	}
	cout << endl;
	
	map<int, string> :: iterator it = m.find(2);
	//auto it = m.find(5);
	for(auto i = it; i != m.end(); i++)
	{
		cout << (*i).first << endl;
	}
}
