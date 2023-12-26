#include<iostream>
using namespace std;

void sortArray(int *arr, int n, int start = 1)  // defult argument
{
	// base case
	if(n == 0 || n == 1)
	{
		return ;
	}
	int key = arr[start];
	int i = start-1;
	while(i >= 0 && arr[i] > key)
	{
		arr[i+1] = arr[i];  // shift kar diye
		i--;
	}
	arr[i+1] = key;
	
	// recursive call;
	sortArray(arr, n-1, start+1);
}

int main()
{
	int n;
	cout << "Enter the size of array: " << endl;
	cin >> n;
	
	int *arr = new int [n];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << "Before sorting" << endl;
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	sortArray(arr, n);
	
	cout << "After Sorting" << endl;
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	return 0;
}
