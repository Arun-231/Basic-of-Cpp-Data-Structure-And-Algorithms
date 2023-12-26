#include<iostream>
#include<deque>
using namespace std;

int main()
{
	deque<int> d;
//	cout << d.empty() << endl;
	d.push_back(1);
	d.push_front(2);
  	for(int i:d)
	{
		cout << i << " ";
	} 
	cout << endl;
//	cout << d.empty() << endl;
	
/*	d.pop_front();
	for(int i:d)
	{
		cout << i << " ";
    }  */
    
	cout << "Print first index element -> " << d.at(1) << endl;
	cout << "Front -> " << d.front() << endl;
	cout << "Back -> " << d.back() << endl;
	cout << "Empty or Not -> " << d.empty() << endl;
	cout << "Before erase -> " << d.size() << endl;
	d.erase(d.begin(),d.begin()+1);
	cout <<"After erase -> " << d.size() << endl;
	for(int i:d)
	{
		cout << i << " ";
	}  
}
