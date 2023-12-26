#include<iostream>
using namespace std;

bool isSorted(int arr[], int size)
{
	// base case
	if(size == 0 || size == 1){
		return true;
	}
	if(arr[0] > arr[1]){
		return false;
	}
	
	return isSorted(arr + 1, size - 1);
}

int main()
{
	int arr[6] = {2, 4, 6, 9, 11, 13};
	int size = 6;
	
	int ans = isSorted(arr, size);
	
	if(ans){
		cout << "Array is Sorted" << endl;
	}
	else{
		cout << "Array is not Sorted" << endl;
	}
	
	return 0;
}
