#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    // First trinagle
    while(i<=n)
    {
        int j=1;
        while(j<=n+1-i)
        {
            cout<<j;
            j++;
        }
        // half tringale stAR KE LIYE
        int s1=i-1;
        while(s1)
        {
            cout<<"*";
            s1--;
        }
        // half of trigale star ke liye
        int s2=i-1;
        while(s2)
        {
            cout<<"*";
            s2--;
        }
        // half of tringale 
        int start=j-1;
        while(start)
        {
            cout<<start;
            start--;
        }
        
        
        cout<<endl;
        i++;
    }
}