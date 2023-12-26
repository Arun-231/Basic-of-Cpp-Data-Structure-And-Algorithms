#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i,ans=0;
	for(i=0;n>0;i++)
	{
		ans = ans+pow(2,i)*(!(n%2));
		n = n/2;
	}
	cout<<ans;  
  /*	int m=n;
	int mask=0;
	//edge case
	if(n==0)
	    cout<<1;
	while(n!=0){
		mask=(mask<<1)|1;
		n=n>>1;
	}
	int ans=(~n)&mask;
	cout<<ans; */
}
