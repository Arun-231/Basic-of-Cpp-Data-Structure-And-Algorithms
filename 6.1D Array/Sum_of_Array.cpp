#include<iostream>
using namespace std;

int sumOfarray(int arr[], int n)
{
	int sum = 0;
	for(int i=0;i<n;i++)
	{
		sum = sum+arr[i];
	}
	return sum;
}

int main()
{
	int size;
	cout << "size of array is ";
	cin >> size;
	int arr[100];
	for(int i=0;i<size;i++)
	{
		cin >> arr[i];
	}
	int sum = sumOfarray(arr, size);
	cout<<"Sum of all elemnet in array is "<< sum << endl;
	return 0;
	
}
