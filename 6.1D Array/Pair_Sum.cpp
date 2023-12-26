#include<iostream>
using namespace std;

int pairSum(int arr[], int n, int sum)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(arr[i] + arr[j] == sum)
			{
				cout<< arr[i] << " " << arr[j] << endl;
			}
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
	int sum;
	cout << "Sum = ";
	cin >> sum ;
	pairSum(arr, size, sum);
	return 0;
	
}
