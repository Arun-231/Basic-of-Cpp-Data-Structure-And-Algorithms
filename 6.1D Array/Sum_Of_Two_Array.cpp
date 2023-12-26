#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v)
{
	int s = 0;
	int e = v.size() - 1;
	while(s < e)
	{
		swap(v[s++], v[e--]);
	}
	return v;
}

vector<int> sumOfTwoArray(vector<int> a, int n, vector<int> b, int m)
{
	int i =  n - 1;
	int j = m - 1;
	int carry = 0;
	vector<int> ans;
	while(i >= 0 && j >= 0)
	{
	    int val1 = a[i];
		int val2 = b[j];
		int sum = val1+ val2 + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
		j--;	
	}
	
	//first case
	
	while(i >= 0)
	{
		int sum = a[i] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		i--;
	}
	
	// second case
	
	while(j >= 0)
	{
		int sum = b[j] + carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
		j--;
	}
	
	// third case
	
	while(carry != 0)
	{
		int sum = carry;
		carry = sum/10;
		sum = sum%10;
		ans.push_back(sum);
	}
	return reverse(ans);
	
}

void printArray(vector<int> v)
{
	for(int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;
}

int main()
{
	int n, m;
	vector<int> v1;
	vector<int> v2;
	cout << "enter the size of first array" << endl;
	cin >> n;
	
	int a, b;
	for(int i = 0; i < n; i++)
	{
		cin >> a;
		v1.push_back(a);
	}
    cout << "enter the size of secound array" << endl;
    cin >> m;
	for(int j = 0; j < m; j++)
	{
		cin >> b;
		v2.push_back(b);
	}
	vector<int> result = sumOfTwoArray(v1, n, v2, m);
	cout << "After addition of array is" << endl;
    printArray(result);
	return 0;
}
