#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,m;
	cout<<"Enter number of rows ";
	cin>>n;
	m=(n+1)/2;
	for(i=1;i<=n;i++)
	{
		if(n%2==0)
		{
			if(i<=m)
			k++;
			if(i>m+1)
			k--;
		}
		else
		i<=m?k++:k--;
		for(j=1;j<=n;j++)
		{
			if(j<=k||j>=n+1-k)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
}
