#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,m;
	cout<<"Enter number of row ";
	cin>>n;
	m=(n+1)/2;
	for(i=1;i<=n;i++)
	{
		i<=m?k++:k--;
		for(j=1;j<=m;j++)
		{
			if(j>=m+1-k&&j<=m)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
