#include<iostream>
#include<vector>
using namespace std;

void moveZero(int arr[], int n)
{
	int i = 0;
	for(int j = 0; j < n; j++)
	{
		if(arr[j] != 0)
		{
			swap(arr[j], arr[i]);
			i++;
		}
	}
	
}

void printArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main()
{
	int size;
	cout << "Size of Array -> ";
	cin >> size;
	int arr[100];
	for(int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	
	moveZero(arr, size);
	cout << "Move Zeroes array -> " << endl;
	printArray(arr, size);
	return 0;
}
