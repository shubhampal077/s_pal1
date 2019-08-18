#include<bits/stdc++.h>
#define mod 1000000007 
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;

ll C(ll n, ll r, ll p) 
{ 
    // The array C is going to store last row of 
    // pascal triangle at the end. And last entry 
    // of last row is nCr 
    ll m[r+1]; 
    memset(m, 0, sizeof(m)); 
  
    m[0] = 1; // Top row of Pascal Triangle 
  
    // One by constructs remaining rows of Pascal 
    // Triangle from top to bottom 
    for (ll i = 1; i <= n; i++) 
    { 
        // Fill entries of current row using previous 
        // row values 
        for (ll j = min(i, r); j > 0; j--) 
  
            // nCj = (n-1)Cj + (n-1)C(j-1); 
            m[j] = (m[j] + m[j-1])%p; 
    } 
    return m[r]; 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,a,b,c,ans,x,i,k,var,var1;
    cin>>t;
    while(t--)
    {
        ans=0,var=0;
        cin>>a>>b>>c;
        k=pow(2,c)-1;
        if(a>b)
        {
            for(x=2;x<=b;x++)
            {
                for(i=1,var=0;i<=x-1;i++)
                {
                    var+=C(b,i,mod);
                    ans+=(C(a,x,mod)*var*k)%mod;
                }
            }
            var1=pow(2,b)-1;
            for(x=b+1;x<=a;x++)
            {
                ans+=(C(a,x,mod)*var1*k)%mod;
            }
        }
        else if(a<b)
        {
            for(x=2;x<a;x++)
            {
                for(i=1,var=0;i<=x-1;i++)
                {
                    var+=C(b,i,mod);
                    ans+=(C(a,x,mod)*var*k)%mod;
                }
            }
        }
        cout<<ans%mod<<endl;
    }
    return 0;
}