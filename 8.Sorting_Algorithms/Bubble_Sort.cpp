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

void bubbleSort(int arr[], int n)
{
	for(int i = 0; i < n - 1; i++)   // for round loop
	{
		bool swapped = false;     // for optimisation if array alredy sorted don't compare or don't waste time
		for(int j = 0; j < n - i -1; j++)   // for n - i in every round j is sorted and j decreases
		{
			if(arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
				swapped = true;
			}
		}
		if(swapped == false)
		    break;
	}
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
bubbleSort(arr, size);
cout << "Sorted Array : " << endl;
printArray(arr, size);
return 0;
} 
