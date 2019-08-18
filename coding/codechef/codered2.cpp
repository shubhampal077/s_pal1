#include<bits/stdc++.h>
#define MOD 1000000007
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
//const int MOD = 1000000007;
ll powermod(ll num,ll p)
{
    if(p==0)
        return 1;
    ll half=powermod(num,p/2);
    ll result=(half*1LL*half)%MOD;
    if(p&1)
        result=(result*1LL*num)%MOD;
    return result;

}
ll modinv(ll num)
{
    return powermod(num,MOD-2);
}
vector<ll> NCR(ll n)
{
    vector<ll> ncr(n+1);
    ncr[0]=1;
    for(ll i=1;i<=n;i++)
    {
        ncr[i]=((n-i+1)*1LL*ncr[i-1])%MOD;
        ncr[i]=(ncr[i]*1LL*modinv(i))%MOD;
    }
    return ncr;
}
void add(ll &x,ll y)
{
    x+=y;
    if(x>=MOD)
        x-=MOD;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        if(a<2 || b<1 || c<1){
            cout<<"0"<<endl;
            continue;
        }
        auto ncrA = NCR(a);
        auto ncrB = NCR(b);
        auto ncrC = NCR(c); 
        ll sumC=0;
        for(ll i=1;i<=c;i++)
            add(sumC,ncrC[i]);
        ll result=0;
        ll sumB=0;
        for(ll i=2;i<=a;i++)
        {
            if(i-1<=b)
                add(sumB,ncrB[i-1]);
            ll toadd=(ncrA[i]*1LL*sumB)%MOD;
            add(result,toadd);
        }
        result=(result*1LL*sumC)%MOD;
        cout<<result<<endl;
    }
    return 0;
}