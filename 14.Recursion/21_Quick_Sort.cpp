#include<iostream>
using namespace std;

int partition(int *arr, int s, int e)
{
	int pivot = arr[s];
	int cnt = 0;
	for(int i = s+1; i <= e; i++)
	{
		if(pivot >= arr[i])
		{
			cnt++;
		}
	}
	// place pivot at right postition
	int pivotIndex = s+cnt;
	swap(arr[pivotIndex], arr[s]);
	// left and right part ko sambhal lo
	int i = s;
	int j = e;
	while(i<pivotIndex && j>pivotIndex)
	{
		while(arr[i] <= pivot)
		{
			i++;
		}
		while(arr[j] > pivot)
		{
			j--;
		}
		if(i<pivotIndex && j>pivotIndex)
		{
			swap(arr[i++], arr[j--]);
		}
	}
	
	return pivotIndex;
}

void quickSort(int *arr, int s, int e)
{
	// base case
	if(s>=e)
	{
		return ;
	}
	// partition kar do
	int p = partition(arr, s, e);
	// left part ko sort karo
	quickSort(arr, s, p-1);
	// right part ko sort karo
	quickSort(arr, p+1, e);
}

int main()
{
    int n;
	cin >> n;
	int *arr = new int[n];
	for(int i = 0; i < n; i++)
	{
	    cin >> arr[i];	
	}	
	
	quickSort(arr, 0, n-1);
	
	cout << endl;
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	delete []arr;
	
	return 0;
}
