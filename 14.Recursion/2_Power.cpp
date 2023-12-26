#include<iostream>
using namespace std;

int power(int n)
{
	// base case
	if(n == 0)
	   return 1;
	
	// recursive relation
	return 2 * power(n - 1);
}

int main()
{
	int n;
	cout << "Enter the number you want Power: ";
	cin >> n;
    
	int ans = power(n);
	
	cout << "Power of " << n << " is " << ans << endl;
	
	return 0;	
}
