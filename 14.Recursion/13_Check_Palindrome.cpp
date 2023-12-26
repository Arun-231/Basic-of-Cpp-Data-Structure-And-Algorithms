#include<iostream>
using namespace std;

bool checkPalindrome(string s, int i)
{
	int n = s.length();
	// base case
	if(i>n-i-1){
		return true; 
	}
	if(s[i] != s[n-i-1]){
		return false;
	}
	return checkPalindrome(s, i+1);
}

int main()
{
	string str = "bookkoob";
	
	bool ispalindrome = checkPalindrome(str, 0);
	
	if(ispalindrome){
		cout << "Its a Palindromne" << endl;
	}
	else{
		cout << "Its not a palindrome" << endl;
	}
	
	return 0;
}
