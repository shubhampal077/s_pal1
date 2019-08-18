#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q,i,j,a,k;
    cin>>n>>q;
    ll F[n+1];
    F[0]=0;
    for(i=1;i<=n;i++)
        cin>>F[i];
    ll ans[n+1];
    ans[0]=0;
    for(ll k=1;k<=n;k++)
    {
        ans[k]=ans[k-1]^F[k];
    }
    for(j=1;j<=q;j++)
    {
        cin>>a;
        ll x=a%(n+1);
        cout<<ans[x]<<endl;
        

    }
    return 0;
}