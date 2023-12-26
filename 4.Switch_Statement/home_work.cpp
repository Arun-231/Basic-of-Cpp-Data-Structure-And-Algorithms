#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,d;
	cout<<"Enter the amount Rs.";
	cin>>n;
	int op;
	cin>>op;
	switch(op)
	{
		case 1:
			a = n/100;
			cout<<"Rs.100 ke notes "<<a<<endl;
			a = a*100;
			n = n-a;
		
		case 2:
			b = n/50;
			cout<<"Rs.50 ke notes "<<b<<endl;
			b = b*50;
			n = n-b;
			
		case 3:
			c = n/20;
			cout<<"Rs.20 ke notes "<<c<<endl;
			c = c*20;
			n = n-c;
			
		case 4:
			d = n/1;
			cout<<"Rs.1 ke notes "<<d<<endl;
			d = d*1;
			n = n-d;
			
	}
}
