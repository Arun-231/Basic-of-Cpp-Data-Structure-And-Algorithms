#include<iostream>
using namespace std;

int getSum(int *arr, int n){
	int sum = 0;
	for(int i=0; i<n; i++){
		sum += arr[i];
	}
	return sum;
}

int main()
{
	int n;
	cin >> n;
	
	// variable size array  -> dynamically created array
	int *arr = new int[n];
	
	// taking input in array
	for(int i=0; i<n; i++){
		cin >> arr[i];
	}
	
	int ans = getSum(arr, n);
	
	cout << "Answer is " << ans << endl;
	
	// case 1
	while(true){      //static allocation here memory is automatically release 
		int i = 5;     // its create memmory in stack
	}
	
	// case 2
	while(true){      // dynamic allocation here memory release manually
		int *ptr = new int;  // its create memory in heap
	}
	
	return 0;
}
