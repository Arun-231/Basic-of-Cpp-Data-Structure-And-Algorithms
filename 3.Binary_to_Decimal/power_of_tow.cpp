#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n>0)
	{
	
	while(n%2==0)
	{
		n = n/2;
	}
	if(n==1)
	{
		cout<<"number is power of two"<<endl;
	}
	if(n==0||n!=1)
	{
		cout<<"number is not power of two"<<endl;
	}
  }
}
