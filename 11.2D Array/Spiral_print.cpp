#include<iostream>
#include<vector>
using namespace std;

void spiralPrint(int arr[][100], int row, int col)
{
	//vector<int> ans;
	
	int count = 0;
	int total = row * col;
	
	int startingRow = 0;
	int endingCol = col - 1;
	int endingRow = row - 1;
	int startingCol = 0;
	
	while(count < total)
	{
		// print starting row
		for(int index = startingCol; count < total && index <= endingCol; index++){
			//ans.push_back(arr[startingRow][index]);
			cout << arr[startingRow][index] << " ";
			count++;
		}
		startingRow++;
		
		// print ending colunm
		for(int index = startingRow; count < total && index <= endingRow; index++){
			//ans.push_back(arr[index][endingCol]);
			cout << arr[index][endingCol] << " ";
			count++;
		}
		endingCol--;
		
		//print ending row
		for(int index = endingCol; count < total && index >= startingCol; index--){
			//ans.push_back(arr[endingRow][index]);
			cout << arr[endingRow][index] << " ";
			count++;
		}
		endingRow--;
		
		// print starting colunm
		for(int index = endingRow; count < total && index >= startingRow; index--){
			//ans.push_back(arr[index][startingCol]);
			cout << arr[index][startingCol] << " ";
			count++;
		}
		startingCol++;
		
	}
	
}

int main()
{
	int m, n;
    cout << "Enter the size of row and colunm : ";
    cin >> m >> n;
    
    cout << "Enter the array element : " << endl;
    int arr[100][100];
    for(int i = 0; i < m; i++){
    	for(int j = 0; j < n; j++){
    		cin >> arr[i][j];
		}
	}
	cout << "Matrix : " << endl;
	for(int i = 0; i < m; i++){
    	for(int j = 0; j < n; j++){
    		cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	
	spiralPrint(arr, m, n);
	
	return 0;
}
