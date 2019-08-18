#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,i,j;
    cin>>n>>k;
    ll rating[n+1],aux[n];
    vector<pair<ll,ll>> v1,v2;
    for(i=1;i<=n;i++)
    {
        cin>>rating[i];
        v1.push_back(make_pair(rating[i],i));
    }
    sort(v1.begin(),v1.end());
    aux[0]=0;
    for(i=1;i<n;i++)
    {
        if(v1[i].first>v1[i-1].first)
        {
            aux[i]=aux[i-1]+1;
        }
        else{
            aux[i]=aux[i-1];
        }
    }
    for(i=0;i<n;i++)
    {
        v2.push_back(make_pair(v1[i].second,aux[i]));
    }
    sort(v2.begin(),v2.end());
    ll a,b;
    for(j=1;j<=k;j++)
    {
        cin>>a>>b;
        if(rating[a]>rating[b])
            v2[a-1].second--;
        else if(rating[b]>rating[a])
            v2[b-1].second--;
    }
    for(i=0;i<n;i++)
        cout<<v2[i].second<<" ";
    return 0;
}