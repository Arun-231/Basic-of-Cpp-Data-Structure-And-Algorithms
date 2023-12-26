#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
	cout<<"Above Array swap Alternate"<< endl;
	for(int i=0;i<n;i++)
	{
		cout<< arr[i]<<" ";
	}
	cout<<endl;
}

int swapAlternate(int arr[], int n)
{
	for(int i=0;i<n;i+=2)
	{
		if(i+1 < n)
		{
			swap(arr[i], arr[i+1]);
		}
	}
}

int main()
{
	int size;
	cout << "Size of array is ";
	cin >> size;
	int arr[100];
	cout<< "Enter element in array "<<endl;
	for(int i=0;i<size;i++)
	{
		cin >> arr[i];
   }
   swapAlternate(arr, size);
   printArray(arr, size);
	return 0;
}
