#include<iostream>
using namespace std;

void print(int arr[], int s, int e)
{
	for(int i = s; i <= e; i++){
		cout << arr[i] << " ";
	}
	cout << endl;
}

bool binarySearch(int arr[], int s, int e, int k)
{
	cout << endl;
	print(arr, s, e);    //  this line check how binary search internally work
	// base case  -> element not found
	if(s>e){
		return false;
	}
	
	int mid = s + (e - s)/2;
	cout << "Value of arr mid is " << arr[mid] << endl;
	// elemnet found
	if(arr[mid] == k){
		return true;
	}
	

	if(arr[mid] < k){
		return binarySearch(arr, mid+1, e, k);
	}
	else{
		return binarySearch(arr, s, mid-1, k);
	}
}

int main()
{
	int arr[6] = {2, 4, 6, 10, 14, 16};
	int key = 18;
	
	bool ans = binarySearch(arr, 0, 5, key);
	
	if(ans){
		cout << "Found" << endl;
	}
	else{
		cout << "Not found" << endl;
	}
	
	return 0;
}
