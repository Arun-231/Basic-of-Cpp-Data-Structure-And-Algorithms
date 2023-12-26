#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1;
    while(i<=n)
    {
        //space print karlo
        int space = n-i;
        while(space)
        {
            cout<<" ";
            space--;
        }
        
        //star print karlo
        int j=1;
        while(j<=i)
        {
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
}