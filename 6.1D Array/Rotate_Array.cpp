#include<iostream>
#include<vector>
using namespace std;

vector<int> rotateArray(vector<int> arr, int k)
{
	vector<int> temp(arr.size());
	for(int i = 0; i < arr.size(); i++)
	{
		temp[(i + k) % arr.size()] = arr[i];
	}
	
	// copy temp into arr 
    arr = temp;
    return arr;
}

void printArray(vector<int> v)
{
	for(int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int main()
{
    int size, pos;
    cout << "Enter size of array and postition for rotation -> ";
    cin >> size >> pos;
    vector<int> v;
    int arr;
    for(int i = 0; i < size; i++)
    {
    	cin >> arr;
    	v.push_back(arr);
	}
	vector<int> result = rotateArray(v, pos);
	cout << "after " << pos << " rotation" <<  endl;
	printArray(result);
	return 0;
}
