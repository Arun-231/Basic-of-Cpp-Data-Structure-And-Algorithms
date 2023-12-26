#include<iostream>
using namespace std;
// row wise sum
void printSum(int arr[][3], int row, int col)
{
	cout << "Print row wise sum" << endl;
	for(int i = 0; i < row; i++){
		int sum = 0;
		for(int j = 0; j < col; j++){
			sum += arr[i][j];
		}
		cout << sum << endl;
	}
}
// colunm wise sum
void printColSum(int arr[][3], int row, int col)
{
	cout << "Print Colunm wise sum" << endl;
	for(int j = 0; j < col; j++){
		int sum = 0;
		for(int i = 0; i < row; i++){
			sum += arr[i][j];
		}
		cout << sum << " ";
	}
	cout << endl;
}

// find largest sum row and index of that row
int largestSum(int arr[][3], int row, int col)
{
	int maxi = INT_MIN;
	int rowIndex = -1;
    for(int i = 0; i < row; i++){
		int sum = 0;
		for(int j = 0; j < col; j++){
			sum += arr[i][j];
	    }
	if(sum > maxi)
	{
		maxi = sum;
		rowIndex = i;
	}
	}
	cout << "The maximum sum is " << maxi << endl;
	return rowIndex;
}


int main()
{
	int arr[3][3];
	
	cout << "Enter thr element" << endl;
	
	// taking input
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cin >> arr[i][j];
		}
	}
	
	// print output 
	cout << "Print the element" << endl;
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	printSum(arr, 3, 3);
	
	printColSum(arr, 3, 3);
	
	int ansIndex = largestSum(arr, 3, 3);
	cout << "Max sum at index is " << ansIndex << endl;
	
	return 0;
}
