#include<iostream>
using namespace std;

int pivotIndex(int arr[], int n)
{
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	int lsum = 0;
	int rsum = sum;
	for(int i = 0; i < n; i++)
	{
		rsum = rsum - arr[i];

	    if(lsum == rsum)
	   {
		    return i;
       }
	    lsum += arr[i];
    }
    return -1;
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
	int pivot = pivotIndex(arr, size);
	cout << "Pivot index is " << pivot << endl;
	return 0;
}
