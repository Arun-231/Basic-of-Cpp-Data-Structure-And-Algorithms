#include<iostream>
using namespace std;

void reverse(string &str, int i)
{
	int n = str.length();
	cout << "call recursive for " << str << endl;
	// base case
	if(i>n-i-1){
		return ;
	}
	swap(str[i], str[n-i-1]);
	i++;
	//j--;
	// recursive call
	return reverse(str, i);
}

int main()
{
	string name = "abcde";
	
	reverse(name, 0);
	cout << name << endl;
	
	return 0;
}
