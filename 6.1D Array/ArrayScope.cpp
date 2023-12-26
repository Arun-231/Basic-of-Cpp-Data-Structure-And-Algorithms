#include<iostream>
using namespace std;

int update(int arr[], int n)
{
	arr[0] = 120;
 cout<< endl <<"Inside the function"<<endl;
 //printing the array
 for(int i=0;i<n;i++){
 	cout<< arr[i] << " ";
   }
   cout<< endl;
   
   cout<<"Going back to main function"<< endl;	
}


int main()
{
	int arr[3] = {1,2,3};
	update(arr, 3);
	
	// Printing the array
	cout<< endl <<"Printing in main function"<< endl;
	for(int i=0;i<3;i++)
	{
		cout<< arr[i] << " ";
	}
	cout<< endl;
	return 0;
}
