#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter a Character"<<endl;
    cin>>ch;
    if(ch>='a'&&ch<='z')
    {
        cout<<"This is Lower case";
    }
    if(ch>='A'&&ch<='Z')
    {
        cout<<"This is Upper Case";
    }
    if(ch>='0'&&ch<='9')
    {
        cout<<"This is numeric";
    }
}