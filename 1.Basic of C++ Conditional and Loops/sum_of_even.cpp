#include<iostream>
using namespace std;
int main()
{
    int i=2,n,sum=0;
    cin>>n;
    while(i<=n)
    {
        sum = sum + i;
        i = i + 2;
    }
    cout<<sum;
}