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
int n,m,s,t;
int graph[1001][1001];
VI ds;
VI dt;
void bfs(int start,VI &d)
{
    queue<int> q;
    vector<bool> vis(n+1);
    vis[start]=true;
    q.push(start);
    d[start]=0;
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
        for(int i=1;i<=n;i++)
        {
            if(graph[curr][i])
            {
                if(!vis[i])
                {
                    vis[i]=true;
                    d[i]=d[curr]+1;
                    q.push(i);
                }
            }
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
    
    cin>>n>>m>>s>>t;
    ds.resize(n + 1);
	dt.resize(n + 1);
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u][v]=1;
        graph[v][u]=1;
    }
    bfs(s,ds);
    bfs(t,dt);
    int d=ds[t];
    int counter=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if ((!graph[i][j]) && ((ds[i] + dt[j] + 1) >= d) && ((ds[j] + dt[i] + 1) >= d))
                    counter++;
            
        }
    }
    cout<<counter;
    return 0;
}