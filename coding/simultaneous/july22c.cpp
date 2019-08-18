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
#define MAX 100005
vector<int> adj[MAX];
vector<bool> vis;
vector<int > c;
void dfs(int i,int &gold)
{
    vis[i]=true;
    gold=min(c[i-1],gold);
    for(auto x:adj[i])
    {
        if(!vis[x])
        {
            dfs(x,gold);
        }
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
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        c.push_back(a);
    }
    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].PB(b);
        adj[b].PB(a);
    }
    vis=vector<bool>(n,false);
    int gold,result=0;
    //memset(vis,false,sizeof(vis));
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            gold=INT_MAX;
            dfs(i,gold);
            result+=gold;
        }
    }
    cout<<result;
    return 0;
}