#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
ll mul(ll n)
{
    ll ans=1,digit;
    while(n>0)
    {
        digit=n%10;
        n/=10;
        ans*=digit;
    }
    return ans;
}
ll len(ll n)
{
    ll count=0;
    while(n>0)
    {
        n/=10;
        count++;
    }
    return count;
}
ll pow(ll b)
{
    ll ans=1;
    while(b>0)
    {
        ans*=10;
        b--;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,ans;
    cin>>n;
    ans=mul(n);
    ll l=len(n);
    ll j=1;
    while(j<l)
    {
        n=n-(n%pow(j)+1);
        if(mul(n)>ans)
            ans=mul(n);
        j++;
    }
    cout<<ans;
    return 0;
}