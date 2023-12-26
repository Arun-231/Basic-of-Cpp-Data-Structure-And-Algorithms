#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n;
	cout<<"Enter binary number ";
	cin>>n;
	int i=0,ans=0;
	while(n!=0)
	{
		int digit = n%10;
		if(digit==1)
		{
			ans = ans+pow(2,i);
		}
		n=n/10;
		i++;
	}
	cout<<ans<<endl;
	int j,newAns=0;
	for(j=0;ans>0;j++)
	{
		newAns = newAns+pow(2,j)*(!(ans%2));
		ans = ans/2;
	}
	cout<<newAns<<endl;
	int k=0;
	int comp=0;
	while(newAns!=0)
	{
		int bit = newAns&1;
		comp = comp+bit*pow(10,k);
		newAns = newAns>>1;
		k++;
	}
	cout<<comp;
}
