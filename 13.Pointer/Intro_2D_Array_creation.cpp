#include<iostream>
using namespace std;

int main()
{
	int row;
	cin >> row;
	int col;
	cin >> col;
	
	// creating a 2D array
	int **arr = new int *[row];
	for(int i=0; i<row; i++){
		arr[i] = new int[col];
	}
	// creation done
	
	// taking input
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cin >> arr[i][j];
		}
	}
	
	// printing output
	cout << endl;
	for(int i=0; i<row; i++){
		for(int j=0; j<col; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	// release memory
	for(int i=0; i<row; i++){
		delete [] arr[i];
	}
	
	delete [] arr;
	
	// how to create 2D array Dynamically
	// taking input/output
	// memory kaise free karni hai
	
	
	return 0;
}
