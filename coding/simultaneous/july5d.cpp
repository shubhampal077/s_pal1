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
#define MAX 100002
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<PII> VPII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;

vector<int> adj[MAX];
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    for(int i=1;i<=n-1;i++)
    {
        int u,v;
        cin>>u>>v;
        adj[u].PB(v);
        adj[v].PB(u);
    }
    int l=0;
    for(auto x:adj)
    {
        if(x.size()==1)
            l++;
    }
    int var=l*(l-1)/2;
    if((n-1)<=var)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}