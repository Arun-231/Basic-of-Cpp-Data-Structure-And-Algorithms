#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cout<<"enter number of rows ";
    cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*n-1;j++)
		{
			if(j>=i&&j<=2*n-i)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}	
}
