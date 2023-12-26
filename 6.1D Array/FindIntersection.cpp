#include<iostream>
using namespace std;

void findArrayIntersection(int arr1[], int n, int arr2[], int m)
{
	int i=0, j=0;
//	vector<int> ans;
	while(i<n && j<m)
	{
		if(arr1[i] == arr2[j])
		{
		    cout << arr1[i] << " ";
		    i++;
		    j++;
	    }
	    else if(arr1[i] < arr2[j])
	    {
	        i++;	
		}
		else
		{
			j++;
		}
	}
}

int main()
{
	int n,m;
	cin >> n >> m;
	int arr1[100];
	int arr2[100];
	for(int i=0;i<n;i++)
	{
		cin >> arr1[i];
	}
	for(int j=0;j<m;j++)
	{
		cin >> arr2[j];
	}
    findArrayIntersection(arr1, n, arr2, m);
    return 0;
}
