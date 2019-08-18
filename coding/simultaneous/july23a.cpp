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
int n,m;
vector<vector<int>> mat;
vector<vector<bool>> vis;
int dx[]={-1,-1,-1,0,0,1,1,1};
int dy[]={-1,0,1,-1,1,-1,0,1};
bool isSafe(int x,int y)
{
    return (x>=0 && x<n && y>=0 && y<m && vis[x][y]==false && mat[x][y]==1);
}
void dfs(int x,int y,int &count)
{
    vis[x][y]=true;
    for(int k=0;k<8;k++)
    {
        if(isSafe(x+dx[k],y+dy[k]))
        {
            dfs(x+dx[k],y+dy[k],count);
            count++;
        }
    }
}
int Island()
{
    vis=vector<vector<bool>>(n,vector<bool>(m,false));
    int count,size=-1;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(!vis[i][j] && mat[i][j]==1)
            {
                count=1;
                dfs(i,j,count);
                size=max(size,count);
            }
        }
    }
    return size;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
  //  cout<<"enter the size of the matrix : ";
    
    cin>>n>>m;
    mat=vector<vector<int>>(n,vector<int>(m));
   // cout<<"enter the matrix: \n";
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>mat[i][j];
        }
    }
    cout<<"size of the largest islands is : "<<Island();
    return 0;
}