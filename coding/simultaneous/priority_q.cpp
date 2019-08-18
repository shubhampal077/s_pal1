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
const int N=100005;
int n,m;
vector<int> adj[N];
bool vis[N];
priority_queue<int,vector<int>,greater<int>> pq;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    cin>>n>>m;
    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a].PB(b);
        adj[b].PB(a);
    }
    pq.push(1);
    vis[1]=true;
    while(!pq.empty())
    {
        int e=pq.top();
        pq.pop();
        cout<<e<<" ";
        for(auto x:adj[e])
        {
            if(vis[x]==false)
            {
                vis[x]=true;
                pq.push(x);
            }
        }
    }
    return 0;
}