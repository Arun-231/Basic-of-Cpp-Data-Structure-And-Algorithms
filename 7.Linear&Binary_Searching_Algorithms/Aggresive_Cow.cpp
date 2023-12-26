#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<int> &arr,int n, int k, int mid)
{
	int cowCount = 1;
	int lastPos = arr[0];
	for(int i = 0; i < n; i++)
	{
		if(arr[i] - lastPos >= mid)
		{
			cowCount++;
			if(cowCount == k)
			{
				return true;
			}
			lastPos = arr[i];
		}
	}
	return false;
}

int aggresiveCows(vector<int> &arr, int n, int k)
{
    sort(arr.begin(), arr.end());
	
	int s = 0;
	int maxi = -1;
	for(int i = 0; i < n; i++)
	{
	    maxi = max(maxi, arr[i]);	
	}	
	int e = maxi;
	int ans = -1;
	int mid = s + (s - e)/2;
	while(s <= e)
	{
		if(isPossible(arr, n, k, mid))
		{
			ans = mid;
			s = mid + 1;
		}
		else
		{
			e = mid - 1;
		}
		mid = s + (e - s)/2;
	}
	return ans;
}

int main()
{
	int k;
	cin >> k;
    vector<int> arr;
	int n = arr.size();
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	cout << aggresiveCows(arr, n ,k) << endl;
	return 0;
}
