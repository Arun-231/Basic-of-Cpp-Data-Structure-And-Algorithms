#include<iostream>
using namespace std;

void sortArray(int *arr, int n, int start=0)  // defalut arguments
{
	// base case
	if(n == 0 || n == 1){
		return ;
	}
	
	//  1 case solve kar diya smallest element ko left me rakh dega(corrcet place)
	int minIndex = start;
	for(int i = start+1; i < n; i++)
	{
		if(arr[minIndex] > arr[i])
		   minIndex = i;
	}
	swap(arr[minIndex], arr[start]);
	
	// recursive call
	sortArray(arr+1, n-1);
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
	for(int i = 0; i < n; i++){
		cout << arr[i] << " ";
	} 
	cout << endl;
	
	delete [] arr;
	
	return 0;
}
