#include<iostream>
using namespace std;

int findDuplicate(int arr[], int n)
{
	// XORing all element of array
	int ans = 0;
	for(int i=0;i<n;i++)
	{
		ans = ans^arr[i];
	}
	// XOR [1, N-1]
	for(int i=1;i<n;i++)
	{
		ans = ans^i;
	}
	return ans;
}

int main()
{
	int size;
	cin >> size;
	int arr[100];
	for(int i=0;i<size;i++)
	{
	cin >> arr[i];	
	}
	
    int duplicate =	findDuplicate(arr, size);
    cout<< "Duplicate is " << duplicate << endl;
    return 0;
}
