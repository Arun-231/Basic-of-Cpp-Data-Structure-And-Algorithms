#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n);
        {
            if(j>=n+1-i)
                cout<<"*";
    
            else
                cout<<" ";
            
            j++;
        }
        cout<<endl;
        i++;
        
    }
}