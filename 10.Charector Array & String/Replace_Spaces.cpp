#include<iostream>
using namespace std;

string replaceSpaces(string s)
{
	//string temp = "";
	string str = "@40";
	for(int i = 0; i < s.length(); i++)
	{
		if(s[i] == ' ')
		{
		/*	temp.push_back('@');
			temp.push_back('4');
			temp.push_back('0');   */
			
			// wihtout third variable
			
			s.replace(i,1,str);
		}
	/*	else
		{
			temp.push_back(s[i]);
		} */
	}
	return s;
}

int main()
{
   string s;
   getline(cin, s);
   
   cout << replaceSpaces(s) << endl;
   return 0;
}
