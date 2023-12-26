#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
	int start = 0;
	int end = n - 1;
	int mid = start + (end - start)/2;
	while(start <= end)
	{
		if(arr[mid] == key)
		{
			return mid;
		}
		else if(arr[mid] < key)
		{
			start = mid + 1;
		}
		else
		{
			end = mid - 1;
		}
		mid = start + (end - start)/2;
	}
	return -1;
}

int main()
{
	int size;
	cin >> size;
	int arr[100];
	for(int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	int key;
	cin >> key;
	int index = binarySearch(arr, size, key);
	cout << "Index of " << key << " is " << index;
	return 0;
}
