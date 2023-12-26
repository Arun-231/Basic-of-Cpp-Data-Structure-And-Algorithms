#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        int k=1;
        int j=1;
        while(j<=(2*n))
        {
            if(j<=n+1-i)
            {
                cout<<k;
                k++;
           }
            else
                cout<<" ";
            if(j>n+i-1)
            {
                cout<<k;
                k--;
                
            }
            else
            {
                cout<<" ";
                if(j==n)
                    k--;
            }
            j++;
        }
        cout<<endl;
        i++;
     }         
}