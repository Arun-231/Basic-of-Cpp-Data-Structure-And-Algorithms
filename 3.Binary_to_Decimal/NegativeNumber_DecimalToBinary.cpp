#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=0,i=0;
 
     
    int newAns;
    n=n*(-1); 
    while(n!=0)
    {
        int bit = n&1;
        ans = (bit*pow(10,i))+ans;
        n=n>>1;
        i++;
       
    }    //cout<<ans<<endl;
        newAns = ~(ans);   //  1's compliment
        cout<<newAns;
        newAns = newAns+1;   // 2's compliment
    
        cout<<newAns<<endl;
   
   /* else
    {
        while(n!=0)
        {
            int bit = n&1;
            ans = (bit*pow(10,i))+ans;
            n=n>>1;
            i++;
        }
        cout<<ans<<endl;
    }  */
}
