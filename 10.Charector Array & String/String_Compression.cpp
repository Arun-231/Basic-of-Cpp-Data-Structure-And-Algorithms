#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int stringCompression(char ch[], int n)
{
	int i = 0;
	int ansIndex = 0;
		while(i < n)
	{
		int j = i + 1;
		while(j < n && ch[i] == ch[j])
		{
			j++;
		}
		ch[ansIndex++] = ch[i];
		int count = j - i;
		if(count > 1)
		{
			string cnt = to_string(count);
			for(char a : cnt)
			{
				ch[ansIndex++] = a;
			}
		}
		i = j;
	}
	return ansIndex;
}

int main()
{
    int size;
    cin >> size;
	char ch[100];
	for(int i = 0; i < size; i++)
	{
		cin >> ch[i];
	}
    cout <<	stringCompression(ch, size) << endl;

	return 0;
}
