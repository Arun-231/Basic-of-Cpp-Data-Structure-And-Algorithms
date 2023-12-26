#include<iostream>
using namespace std;
 // 1 -> prime number
 // 0 -> Not a prime number
bool isPrime(int n){
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		return 0;
	}
	return 1;
}

int main()
{
	int n;
	cin>> n;
/*	int a = isPrime(n);
	if(a == 1)
		cout<<"is a prime"<<endl;
	else
	cout<<"Not a prime"<<endl;
*/
    if(isPrime(n))
    cout<<"Is a Prime"<<endl;
    else
    cout<<"Not a prime"<<endl;
}
