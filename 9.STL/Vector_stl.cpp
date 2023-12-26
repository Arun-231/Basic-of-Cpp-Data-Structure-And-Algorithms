#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int> v;   //declaration of dynamically created array 
	
	vector<int> a(5,1);
	vector<int> last(a);
	cout << "Print Last -> " << endl;
    for(int i:last)
    {
    	cout << i << " ";
	}
	cout << endl;
	
    cout << "Capacity -> " << v.capacity() << endl;	
    
    v.push_back(1);
    cout << "Capacity -> " << v.capacity() << endl;
    
    v.push_back(2);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(4);
    cout<< "Capacity -> " << v.capacity() << endl;
    v.push_back(5);
    cout<< "Capacity -> " << v.capacity() << endl;
    cout << "Size -> " << v.size() << endl;
    v.push_back(6);
    v.push_back(7);
    v.push_back(8);
    cout << "Capacity -> " << v.capacity() << endl;
    v.push_back(9);
    cout << "Capacity -> " << v.capacity() << endl;
    cout << "Size -> " << v.size() << endl;
    
    cout << "Element at index 2 is -> " << v.at(2) << endl; 
    
    cout << "Front -> " << v.front() << endl;
    cout << " Back -> " << v.back() << endl;
    
    cout << "Before pop " << endl;
    for(int i : v)
    {
    	cout << i << " ";
	}
	cout << endl;
	
	v.pop_back();
	
	cout << "After pop " << endl;
    for(int i:v)
    {
    	cout << i << " ";
	}
	cout << endl;
 	
    cout << "before clear " << v.size() << endl;
	v.clear();
	cout << "After clear " << v.size() << endl;	
}
