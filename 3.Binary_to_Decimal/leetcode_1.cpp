#include<iostream>
using namespace std;
int main()
{
    int n,product=1,sum=0,digit;
    cout<<"Enter any digit ";
    cin>>n;
    while(n!=0)
    {
        digit = n%10;
        product = product*digit;
        sum = sum + digit;
        n = n/10;
    }
    int result = product-sum;
    cout<<result;
}