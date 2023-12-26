#include<iostream>
#include<string.h>
using namespace std;

string removeDuplicate(string s)
{
	string temp = "";
	int n = s.length();
	int i = 0;
	while(i < n)
	{
		if(temp.empty() || s[i] != temp.back())
		{
			temp.push_back(s[i]);
		}
	    else
	    {
	    	temp.pop_back();
		}
	    i++;
	}
	return temp; 
  
}

int main()
{
  string str;
  cin >> str;
  cout << removeDuplicate(str) << endl;
  return 0;	
}
