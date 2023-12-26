#include<iostream>
using namespace std;

// iterative or brute force or navive Approach
int getInvCount(int *arr, int n)
{
	int InvCount = 0;
	for(int i = 0; i < n-1; i++)
	{
		for(int j = i+1; j < n; j++)
		{
			if(arr[i] > arr[j])
			   InvCount++;
		}
	}
	return InvCount;
}

int main()
{
	int arr[7] = {38, 27, 43, 3, 9, 82, 10};
	int n = 7;
	
	cout << " Number of Inversion " << getInvCount(arr, n) << endl;
	
	return 0;
}
