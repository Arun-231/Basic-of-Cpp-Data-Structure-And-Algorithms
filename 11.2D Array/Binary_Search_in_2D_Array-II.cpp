#include<iostream>
using namespace std;

bool binarySearch(int arr[][100], int row, int col, int target)
{
	int rowIndex = 0;
	int colIndex = col - 1;
	while(rowIndex < row && colIndex >= 0)
	{
		int element = arr[rowIndex][colIndex];
		if(element == target){
			return 1;
		}
		else if(element < target){
			rowIndex++;
		}
		else{
			colIndex--;
		}
	}
	return 0;
}

int main()
{
	int m, n;
   cout << "Enter the row and colunm : ";
   cin >> m >> n;
   int arr[100][100];
   
   // taking input
   cout << "Enter Array element : " << endl;
   for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
    	cin >> arr[i][j];
	}
   }
   // output
    cout << "Output of array : " << endl;   
   	for(int i = 0; i < m; i++){
    for(int j = 0; j < n; j++){
    	cout << arr[i][j] << " ";
	}
	cout << endl;
   }
   int target;
   cout << "Enter Element you want to search : ";
   cin >> target;
   
   int ans = binarySearch(arr, m, n, target);
   if(ans == 1)
   {
   	cout << "Element is found!" << endl;
   }
   else
   {
   	cout << "Element is not found!" << endl;
   }
   
   return 0;
}
