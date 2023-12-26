#include<iostream>
using namespace std;

int getMax(int num[], int n){
	int maxi = INT_MIN;
	for(int i=0;i<n;i++){
	//	if(num[i] > max){
	//		max = num[i];
	//	}
	maxi = max(maxi, num[i]);
	}
	// Return max value
	return maxi;
}

int getMin(int num[], int n){
	int mini = INT_MAX;
	for(int i=0;i<n;i++){
	//	if(num[i] < min){
	//		min = num[i];
	//	}
	mini = min(mini, num[i]);
	}
	// Return min value
	return mini;
}

int main()
{
	int size;
	cin>> size;
	
	int num[100];
	for(int i=0;i<size;i++)
	{
		cin >> num[i];
	}
	
	cout<<"Max value is "<< getMax(num, size) << endl;
	cout<<"Min value is "<< getMin(num, size) << endl;
	return 0;
}
