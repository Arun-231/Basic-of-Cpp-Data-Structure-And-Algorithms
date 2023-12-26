#include<iostream>
using namespace std;

bool sortedAndRotated(int arr[], int n)
{
	int count = 0;
	for(int i = 1; i < n; i++)
	{
		if(arr[i - 1] > arr[i])
		{
			count++;
		}
	}
	if(arr[n - 1] > arr[0])
	    count++;
	    
	return count <= 1;
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
	int ans = sortedAndRotated(arr, size);
	//cout << ans;
	if(ans == 1)
	cout << "true";
	else
	cout << "false";
	return 0;
}
