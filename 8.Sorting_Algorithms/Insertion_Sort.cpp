#include<iostream>
using namespace std;


void printArray(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

void insertionSort(int arr[], int n)
{
	for(int i = 1; i < n; i++)
	{
		int key = arr[i];
		int j = i - 1;
		while(j >= 0)
		{
			if(arr[j] > key)
			{
				// shift kar do
				arr[j + 1] = arr[j];
			}
			else
			    break;
			    
			j--;
		}
		arr[j + 1] = key;
	}
}

int main()
{
	int size;
	cin >> size;
	int arr[100];
	for(int k = 0; k < size; k++)
	{
		cin >> arr[k];
	}
	insertionSort(arr, size);
	cout << "Sorted Array : " << endl;
	printArray(arr, size);
	return 0;
}
