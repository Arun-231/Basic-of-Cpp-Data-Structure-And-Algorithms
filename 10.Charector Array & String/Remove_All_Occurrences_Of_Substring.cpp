#include<iostream>
#include<string.h>
using namespace std;

string removeAllOcurrOfSubstring(string s, string part)
{
	while(s.length() != 0 && s.find(part) < s.length())
	{
		s.erase(s.find(part), part.length());
	}
	return s;
}

int main()
{
	string s, part;
	cin >> s >> part;
	cout << removeAllOcurrOfSubstring(s, part) << endl;
	return 0;
}
