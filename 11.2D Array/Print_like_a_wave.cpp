#include<iostream>
using namespace std;
#define n 3
#define m 4
void wavePrint(int arr[n][m], int Row, int Col)
{

	for(int col = 0; col < Col; col++){
		if(col&1)
		{
			// odd index -> bottom to top
			for(int row = Row - 1; row >= 0; row--){
				cout << arr[row][col] << " ";
			}
		}
		else
		{
			// even or 0 index -> top to bottom
			for(int row = 0; row < Row; row++){
				cout << arr[row][col] << " ";
			}
		}
	}
}

int main()
{
	int arr[n][m] = {{1,2,3,4},{3,4,5,6},{8,9,0,7}};
	
	wavePrint(arr, n, m);
	return 0;
}
