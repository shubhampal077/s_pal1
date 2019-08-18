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
const int INF=1e9;
vector<vector<int>> adj;//note this is how we can declare a adjacency list without knowing
//it's size previously size is given in the main() function
vector<int> d;
void bfs(int start)
{
    d=vector<int>(n,INF);
    d[start]=0;
    queue<int> q;
    q.push(start);
    while(!q.empty())
    {
        int w=q.front();
        q.pop();
        for(auto x:adj[w])
        {
            if(d[x]==INF)
            {
                d[x]=d[w]+1;
                q.push(x);
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
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        adj=vector<vector<int>>(n);
        for(int i=0;i<m;i++)
        {
            int a,b;
            cin>>a>>b;
            a--;b--;
            adj[a].PB(b);
            adj[b].PB(a);
        }
        bfs(0);
        VI even,odd;
        for(int i=0;i<n;i++)
        {
            if(d[i]%2==0)
                even.PB(i);
            else
                odd.PB(i);
        }
        if(even.size()<odd.size())
        {
            cout<<even.size()<<endl;
            for(auto x:even)
            {
                cout<<x+1<<" ";
            }
            cout<<endl;
        }
        else
        {
            cout<<odd.size()<<endl;
            for(auto x:odd)
            {
                cout<<x+1<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}