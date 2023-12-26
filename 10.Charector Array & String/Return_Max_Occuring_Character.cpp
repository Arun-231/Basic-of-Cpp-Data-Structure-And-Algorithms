#include<iostream>
using namespace std;

char getMaxOccurCharacter(string s)
{
	int arr[26] = {0};
	
	//create an array of count of character
	for(int i = 0; i <s.length(); i++)
	{
		char ch = s[i];
		int number = 0;
		//lower case
		number = ch - 'a';
		arr[number]++;
	}
	
	// find maximum character
	int maxi = -1, ans = 0;
	for(int i = 0; i < 26; i++)
	{
		if(maxi < arr[i])
		{
			ans = i;
			maxi = arr[i];
		}
	}
	
	return 'a' + ans;
}

int main()
{
    string s;
	cin >> s;
	cout << getMaxOccurCharacter(s) << endl;
	return 0;
}
