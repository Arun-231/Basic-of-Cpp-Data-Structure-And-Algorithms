#include<iostream>
using namespace std;

int peakIndex(int arr[], int n)
{
	int s = 0;
	int e = n - 1;
	int mid = s + (e - s)/2;
	while(s < e)
	{
		if(arr[mid] < arr[mid + 1])
		{
			s = mid + 1;
		}
		else
		{
			e = mid;
		}
		mid = s + (e - s)/2;
	}
	return s;
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
	int peak = peakIndex(arr, size);
	cout << "Peak Index is " << peak << endl;
	return 0;
}
