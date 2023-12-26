#include<iostream>
using namespace std;

long long int mySqrt(int x)
{
	int s = 0;
	int e = x;
	long long int ans = -1;
	long long int mid = s + (e - s)/2;
	while(s <= e)
	{
		long long int square = mid * mid;
		if(square == x)
		{
			return mid;
		}
		else if(square < x)
		{
		    ans = mid;
			s = mid + 1;	
		}
		else
		{
		    e = mid - 1;	
		}
		mid = s + (e - s)/2;
	}
	return ans;
}

double morePrecision(int n, int precision, int tempSol)
{
	double factor = 1;
	double ans = tempSol;
	for(int i = 0; i < precision; i++)
	{
		factor = factor/10;
		for(double j = ans; j * j < n; j += factor)
		{
			ans = j;
		}
	}
	return ans;
}

int main()
{
	int n;
	cin >> n;
	int tempSol = mySqrt(n);
	cout << "Answer is " << morePrecision(n, 3, tempSol);
	return 0;
}
