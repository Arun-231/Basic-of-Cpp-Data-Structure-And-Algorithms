#include<iostream>
using namespace std;

int tripletsSum(int arr[], int n, int sum)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			for(int k = j+1; k < n; k++)
			{
				if(arr[i] + arr[j] + arr[k] == sum)
				{
					cout<< arr[i] << " " << arr[j] << " " <<arr[k] <<endl;
				}
			}
		}
	}
}

int main()
{
	int size;
	cin >> size;
	int sum;
	cin >> sum;
	int arr[100];
	for(int i = 0; i < size; i++)
	{
		cin >> arr[i];
	}
	tripletsSum(arr, size, sum);
	return 0;
}
