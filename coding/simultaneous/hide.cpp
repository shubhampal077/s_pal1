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
bool check(int u,int v,vector<int> g[])
{
    if(g[u][0]<g[v][g[v].size()-1])
        return true;
    else return false;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,k,sum=0;
    int a[k];
    SETI s;
    vector<int> g[n+1];
    for(int i=0;i<k;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
        g[a[i]].push_back(i);
    }
    for(int i=1;i<=n;i++)
    {
        sort(g[i].begin(),g[i].end());
    }
    for(int i=1;i<=n-1;i++)
    {
        sum+=(check(i,i+1,g)+check(i+1,i,g));
    }
    cout<<(2*n-2-sum+n-s.size());
    return 0;
}