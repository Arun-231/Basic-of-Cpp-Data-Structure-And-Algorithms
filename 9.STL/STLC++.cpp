#include<iostream>
#include<bits/stdc++.h>
#include<array>
using namespace std;

int main()
{
	int basic[] = {1,2,3};
	array<int,4> a = {1,2,3,4};
	int size = a.size();
	cout << size << endl;
	for(int i = 0; i < size; i++)
	{
		cout<< a[i] << endl;
    }
    cout << "Element of 2nd Index -> " << a.at(2) << endl;
    cout << "empty or not -> " << a.empty() << endl;
    cout << "First element -> " << a.front() << endl;
    cout << "Last element -> " << a.back() << endl;
    
    return 0;
}
