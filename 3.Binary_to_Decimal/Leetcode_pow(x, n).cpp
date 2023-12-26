#include<iostream>
using namespace std;

double solution(double x, long n)
{
	if(n == 0) return 1;
	if(n < 0)  return solution(1/x, -n);
	if(n % 2 == 0) return solution(x * x, n/2);
	else
	return x * solution(x * x, (n - 1)/2);
}

double myPow(double x, int n)
{
	return solution(x, (long) n);
}

int main()
{
	int x, n;
	cin >> x >> n;
	double pow = myPow(x, n);
	cout << pow << endl;
	return 0;	
}
