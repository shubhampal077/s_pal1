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
const int N=404;
int mat[N][N];
int road[N],rail[N];
int n,m;
void bfs(int start,int type,int x[])
{
    queue<int> q;
    q.push(start);
    vector<bool> vis(n+1,0);
    vis[start]=true;
    while(!q.empty())
    {
        int a=q.front();
        q.pop();
        for(int i=1;i<=n;i++)
        {
            if(mat[a][i]==type && vis[i]==false)
            {
                x[i]=x[a]+1;
                q.push(i);
                vis[i]=true;
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
    
    cin>>n>>m;
    /*for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            mat[i][j]=0;*/
    memset(mat,0,sizeof(mat));
    memset(road,-1,sizeof(road));
    memset(rail,-1,sizeof(rail));
    for(int i=1;i<=m;i++)
    {
        int u,v;
        cin>>u>>v;
        mat[u][v]=1;
        mat[v][u]=1;
    }
    if(mat[1][n]==1)//check for road
    {
        road[1]=0;
        bfs(1,0,road);
        if(road[n]==-1)
            cout<<"-1"<<endl;
        else
            cout<<max(1LL,road[n]);
    }
    else
    {
        rail[1]=1;
        bfs(1,1,rail);
        if(rail[n]==-1)
            cout<<"-1"<<endl;
        else
            cout<<max(1LL,(rail[n]));
    }
    return 0;
}