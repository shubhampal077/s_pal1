#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
const int MOD=1e9+7;
const int N = 2e5 + 5;
ll powmod(ll a,ll b,ll m)
{
    if(b==0)
        return 1;
    else if(b&1)
        return ((powmod(a,b-1,m)%m)*(a%m))%m;
    else 
        return ((powmod(a,b/2,m)%m)*(powmod(a,b/2,m)%m))%m;
}

ll sz;
bool visited[N];
vector<ll> adjlist[N];
void dfs(ll x)
{
    if(!visited[x])
    {
        visited[x]=true;
        sz++;
        vector<ll>::iterator it;
        for(it=adjlist[x].begin();it!=adjlist[x].end();it++)
        {
            dfs(*it);
        }
        
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,ans=0,u,v,y;
    cin>>n>>k;
    ans=powmod(n,k,MOD);
    for(ll i=1;i<=n-1;i++)
    {
        cin>>u>>v>>y;
        if(y==0)
        {
            adjlist[u].push_back(v);
            adjlist[v].push_back(u);
        }
    }
    for(ll i=1;i<=n;i++)
    {
        if(visited[i]==true)
            continue;
        sz=0;
        dfs(i);
        ans-=powmod(sz,k,MOD);
	  ans+=MOD;
	  ans%=MOD;
    }
    cout<<ans;
    return 0;
}