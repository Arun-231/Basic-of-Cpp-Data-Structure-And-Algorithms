#include<iostream>
using namespace std;

void sortArray(int *arr, int n)
{
	// base case -> already sorted
	if(n == 0 || n == 1){
		return ;
	}
	bool swapped = false;
	// 1 case solve kar diya - largest element ko end me rakh dega
	for(int i = 0; i < n-1; i++){
		if(arr[i] > arr[i+1])
		  swap(arr[i], arr[i+1]);
		  swapped = true;     // otimised code
	}
	if(swapped == false)
	   return ;
	// recursive call
	sortArray(arr, n-1);
}

int main()
{
	int n;
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
	
	cout << "After sorting" << endl;
	for(int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	
	delete [] arr;
	
	return 0;
}
