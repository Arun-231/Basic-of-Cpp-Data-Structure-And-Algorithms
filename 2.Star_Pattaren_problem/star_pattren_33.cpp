#include<iostream>
using namespace std;
int main()
{
	int i,j,k,n,m;
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
			if(j>=m+1-k&&j<=m-1+k)
			cout<<"*";
			else
			cout<<" ";
		}
		cout<<endl;
	}
	
}
