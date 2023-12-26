#include<iostream>
using namespace std;

int cnt = 0;

void towerOfHanoi(int n, char *a, char *b, char *c)
{
	
	if(n == 1)
	{
		++cnt;
		cout << cnt << " : Move disk " << 1 << " from " << a << " to " << c << endl;
		return ;
	}
	else{
		towerOfHanoi(n-1, a, c, b);
		++cnt;
		cout << cnt << " : Move disk " << n << " from " << a << " to " << c << endl;
		towerOfHanoi(n-1, b, a, c);
		return ;
	}
}

int main()
{
	int n;
	cout << "Enter Number of disk: ";
	cin >> n;
	towerOfHanoi(n, "Tower 1", "Tower 2", "Tower 3");
	
	return 0;
}
