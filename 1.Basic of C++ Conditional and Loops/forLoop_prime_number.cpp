#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n ";
    cin>>n;
    int i;
    bool isPrime =1;
    for(i=2;i<n;i++)
    {
        // rem = 0, not a prime
        if(n%i==0){
            //cout<<"Not a prime number";
            isPrime=0;
            break;
           }
    }
    if(isPrime==0)
    {
        cout<<"Not a prime Number"<<endl;
    }
    else
    {
        cout<<"Is a prime Number"<<endl;
    }
}