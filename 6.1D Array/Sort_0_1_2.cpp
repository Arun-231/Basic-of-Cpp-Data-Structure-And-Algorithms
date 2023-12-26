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


void sort012(int arr[], int n)
{
	int i = 0, j = 0, k = n-1;
	while(j < n && j <= k)
	{
	    if(arr[j] == 0)
		{
		    swap(arr[i], arr[j]);
			i++;
			j++;	
		}	
		else if(arr[j] == 2)
		{
			swap(arr[j], arr[k]);
			k--;
		}
		else
		{
			j++;
		}
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
	
	sort012(arr, size);
	
	printArray(arr, size);
	
	return 0;
}
