#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
#define mod 1000000007
ll power(ll x,ll y,ll p) 
{ 
    ll res = 1;      // Initialize result 
  
    x = x % p;  // Update x if it is more than or  
                // equal to p 
  
    while (y > 0) 
    { 
        // If y is odd, multiply x with result 
        if (y & 1) 
            res = (res*x) % p; 
  
        // y must be even now 
        y = y>>1; // y = y/2 
        x = (x*x) % p;   
    } 
    return res; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j,term2,term1;
    cin>>t;
    while(t--)
    {
        term1 = n % mod;
        term2=power(2,n-1,mod);
        cout<<(term1*term2)%mod<<endl;
    }
    return 0;
}