#include<iostream>
using namespace std;

int firstOcurr(int arr[], int n, int key)
{
	int start = 0, end = n-1;
	int mid = start + (end - start)/2;
	int ans = -1;
	while(start <= end)
	{
		if(arr[mid] == key)
		{
			ans = mid;
			end = mid - 1;
		}
		else if(arr[mid] > key)
		{
			end = mid -1;
		}
		else      // arr[mid] < key 
		{   
		    start = mid + 1;
	    }
	    mid = start + (end - start)/2;
    }
    return ans;
}

int lastOcurr(int arr[], int n, int key)
{
	int start = 0, end = n-1;
	int mid = start + (end - start)/2;
	int ans = -1;
	while(start <= end)
	{
		if(arr[mid] == key)
		{
			ans = mid;
			start = mid + 1;
		}
		else if(arr[mid] > key)
		{
			end = mid -1;
		}
		else      // arr[mid] < key 
		{   
		    start = mid + 1;
	    }
	    mid = start + (end - start)/2;
    }
    return ans;
}

int main()
{
	int size, key;
	cin >> size >> key;
	int arr[100];
	for(int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	int index = firstOcurr(arr, size, key);
	int last = lastOcurr(arr, size, key);
	cout << "First Ocurrence of " << key << " at index "<< index << endl;
	cout << "Last Ocurrence of " << key << " at index "<< last << endl;
	return 0;
}
