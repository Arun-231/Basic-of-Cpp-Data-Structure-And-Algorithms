#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    int k=1;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            if(j>=n-i+1)
                cout<<k++;
            else
                cout<<" ";
            
            j++;
        }
        cout<<endl;
        i++;
    }
}