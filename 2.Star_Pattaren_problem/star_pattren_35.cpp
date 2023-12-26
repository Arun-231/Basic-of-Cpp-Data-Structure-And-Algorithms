#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,m,a;
	cout<<"Enter the number of rows ";
	cin>>n;
	//cout<<"Enter the number of column ";
	//cin>>m;
	a=(n+1)/2;
	for(i=1;i<=n;i++)
	{
	    i<=a?k++:k--;	
		for(j=1;j<=a;j++)
		{
			if(j>=1&&j<=k)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
