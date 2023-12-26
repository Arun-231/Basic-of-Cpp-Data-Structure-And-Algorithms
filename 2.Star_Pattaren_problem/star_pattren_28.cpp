#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=m)
        {
            if(j>=n-i+1&&j<=m+i-n)
                cout<<"*";
            else
                cout<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
}