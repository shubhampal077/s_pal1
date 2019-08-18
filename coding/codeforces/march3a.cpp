#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,k,count=0,a;
    ll po[n+1],sc1[n+1];
    for(ll i=1;i<=n;i++)
        cin>>po[i];
    for(ll i=1;i<=n;i++)
        cin>>sc1[i];
    vector<ll> arr[m+1];
    for(ll i=1;i<=n;i++)
    {
        arr[sc1[i]].push_back(po[i]);
    }
    for(ll i=1;i<=m;i++)
    {
        sort(arr[i].begin(),arr[i].end(),greater<ll>());
    }
    for(ll i=1;i<=k;i++)
    {
        cin>>a;
        if(arr[sc1[a]][0]>=po[a])
            count++;
    }
    cout<<count;
    return 0;
}