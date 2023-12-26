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
        while(j<=n)
        {
            if(j<=n-i)
            {
                char ch = 'A'+i-1;
                cout<<ch<<" ";
            }
            else
            {
                cout<<" ";
            }
            j++;
        }
        cout<<endl;
        i++;
    }
}