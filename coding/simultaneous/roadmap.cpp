#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
#define int long long 
#define MP make_pair
#define PB push_back
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define fi first
#define se second
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<PII> VPII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
const int N=50004;
VI adj[N];
int par[N]={0};
void dfs(int u,int p)
{
    par[u]=p;
    for(auto &x:adj[u])
    {
        if(x==p)
        continue;
        if(par[x]==0)
            dfs(x,u);
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,r1,r2;
    cin>>n>>r1>>r2;
    for(int i=1;i<=n;i++)
    {
        if(i!=r1)
        {
            int x;
            cin>>x;
            adj[i].PB(x);
            adj[x].PB(i);
        }
    }
    dfs(r2,0);
    for(int i=1;i<=n;i++)
    {
        if(i!=r2)
            cout<<par[i]<<" ";
    }
    return 0;
}