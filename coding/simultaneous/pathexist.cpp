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
int N;
vector<vector<int>> M;
vector<vector<int>> vis;
bool valid(int r,int c)
{
    if(r<0 || r>=N || c<0 || c>=N || M[r][c]==0 || vis[r][c])
        return false;
    else
        return true;
}
void dfs(int r,int c)
{
    vis[r][c]=1;
    static int dx[]={0,-1,0,1};
    static int dy[]={-1,0,1,0};
    for(int i=0;i<4;i++)
    {
        if(valid(r+dx[i],c+dy[i]))
        {
            dfs(r+dx[i],c+dy[i]);
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
    int t;
    cin>>t;
    while(t--)
    {
        cin>>N;
        M=vector<vector<int>>(N,vector<int>(N));
        vis=vector<vector<int>>(N,vector<int>(N));
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)
                vis[i][j]=0;
        for(int i=0;i<N;i++)
            for(int j=0;j<N;j++)
                cin>>M[i][j];
        int i,j;
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(M[i][j]==1)
                {
                    break;
                }
            }
        }
        dfs(i,j);
        int u,v;
        for(u=0;u<N;u++)
        {
            for(v=0;v<N;v++)
            {
                if(M[u][v]==2)
                {
                    break;
                }
            }
        }
        if(vis[u][v])
            cout<<"1"<<endl;
        else
            cout<<"0"<<endl;
    }
    return 0;
}