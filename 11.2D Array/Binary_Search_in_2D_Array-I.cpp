#include<iostream>
using namespace std;

bool binarySearch(int arr[][100], int m, int n, int target)
{
	int s = 0;
	int e = m * n - 1;
	int mid = s + (e - s)/2;
	while(s <= e)
	{
		int element = arr[mid/n][mid%n];
		if(element == target){
			return 1;
		}
		if(element < target){
			s = mid + 1;
		}
		else{
			e = mid - 1;
		}
		mid = s + (e - s)/2;
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
