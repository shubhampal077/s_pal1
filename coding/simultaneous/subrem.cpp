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
int x;
const int N=1e5 +5;
int a[N];
vector<int> g[N];
int dfs(int u,int par)
{
    int sum=a[u];
    for(auto &it:g[u])
    {
        if(it==par)
            continue;
        sum+=dfs(it,u);
    }
    sum=max(sum,-x);
    return sum;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            g[i].clear();
        }
        for(int i=1;i<=n-1;i++)
        {
            int u,v;
            cin>>u>>v;
            g[u].PB(v);
            g[v].PB(u);
        }
        int ans=dfs(1,0);
        cout<<ans<<endl;
    }
    return 0;
}