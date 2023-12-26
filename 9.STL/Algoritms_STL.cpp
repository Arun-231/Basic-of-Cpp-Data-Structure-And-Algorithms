#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
	vector<int> v;
	
	v.push_back(1);
	v.push_back(3);
	v.push_back(6);
	v.push_back(7);
	v.push_back(7);
	
	find(v.begin(), v.end(), 5) != v.end() ? cout << "Element found" << endl : cout << "Element not found" << endl;
	
	cout << "Ocurrence of 7 is " << count(v.begin(), v.end(), 7) << endl;
	
	cout << "Max " << *max_element(v.begin(), v.end()) << " Min " << *min_element(v.begin(), v.end()) << endl;
	
	cout << "Sumation of vector element " << accumulate(v.begin(), v.end(), 0) << endl;
	
	cout << "Finding 6 -> "<< binary_search(v.begin(), v.end(), 6) << endl;
	
	cout << "lower bound -> "<< lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
	
	cout << "upper bound -> "<< upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;
	
	
	int a = 5;
	int b = 3;
	
	cout << "Max -> " << max(a, b) << endl;
	
	cout << "Min -> " << min(a, b) << endl;
	
    swap(a, b);
    cout << "a -> " << a <<endl;
    cout << "b -> " << b << endl;
    
    string abcd = "ABCD";
    reverse(abcd.begin(), abcd.end());
    cout << "string -> " << abcd << endl;
    
    rotate(v.begin(),v.begin()+2, v.end());
    cout << "after rotate" << endl;
    for(int i : v)
    {
    	cout << i << " ";
	}
	cout << endl;
    
    sort(v.begin(), v.end());
    for(int i : v)
    {
    	cout << i << " ";
	}
	cout << endl;
}
