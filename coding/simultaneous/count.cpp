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
int n,x,y,a,b,ans=1e18;
char c[55][52];
map<PII,bool> visa,visb;
vector<PII> v,vv;
void dfs_a(int xx,int yy)
{
    visa[{xx,yy}]=true;
    v.PB({xx,yy});
    if(!visa[{xx-1,yy}] && c[xx-1][yy]=='0')
    {
        //v.PB({xx-1,yy});
        dfs_a(xx-1,yy);
    }
    if(!visa[{xx+1,yy}] && c[xx+1][yy]=='0')
    {
        //v.PB({xx+1,yy});
        dfs_a(xx+1,yy);
    }
    if(!visa[{xx,yy-1}] && c[xx][yy-1]=='0')
    {
        //v.PB({xx,yy-1});
        dfs_a(xx,yy-1);
    }
    if(!visa[{xx,yy+1}] && c[xx][yy+1]=='0')
    {
        //v.PB({xx,yy+1});
        dfs_a(xx,yy+1);
    }
}
void dfs_b(int xx,int yy)
{
    if(visa[{xx,yy}])
    {
        cout<<"0";
        exit(0);
    }
    visb[{xx,yy}]=true;
    vv.PB({xx,yy});
    if(!visb[{xx+1,yy}] && c[xx+1][yy]=='0'){
        dfs_b(xx+1,yy);
    }
    if(!visb[{xx-1,yy}] && c[xx-1][yy]=='0'){
        dfs_b(xx-1,yy);
    }
    if(!visb[{xx,yy+1}]  && c[xx][yy+1]=='0'){
        dfs_b(xx,yy+1);
    }
    if(!visb[{xx,yy-1}]  && c[xx][yy-1]=='0'){
        dfs_b(xx,yy-1);
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
    cin>>n>>a>>b>>x>>y;
    for(int i=0;i<=n+1;i++)
        for(int j=0;j<n+1;j++)
            c[i][j]='2';
    for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            cin>>c[i][j];
    dfs_a(a,b);
    dfs_b(x,y);
    for(auto i:v)
        for(auto j:vv)
            ans=min(ans,abs(i.fi-j.fi)*abs(i.fi-j.fi)+abs(i.se-j.se)*abs(i.se-j.se));

    cout<<ans;
    return 0;
}