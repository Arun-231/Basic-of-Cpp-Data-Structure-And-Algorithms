#include<iostream>
using namespace std;
int main()
{
	int n,i,j,k,m;
	cout<<"Enter number of odd rows ";
	cin>>n;
	m = (n+1)/2;
    for(i=1;i<=n;i++)
    {
    	i<=m?k++:k--;
    	for(j=1;j<=n;j++)
    	{
        if(j<=m+1-k||j>=m+k-1)
		cout<<"*";
		else
		cout<<" ";		
		}
		cout<<endl;
	}
}
