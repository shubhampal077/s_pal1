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
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,m,ta,tb,k;
    cin>>n>>m>>ta>>tb>>k;
    VI a(n);
    VI b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        a[i]+=ta;
    }
    for(int i=0;i<m;i++)
        cin>>b[i];
    if(k>=n || k>=m)
    {
         cout<<"-1";
         return 0;
    }
    int ans=0;
    for(int i=0;i<=k;i++)
    {
        int x=lower_bound(b.begin(),b.end(),a[i])-b.begin();
        x+=(k-i);
        if(x>=m)
        {
            cout<<"-1\n";
            return 0;
        }
        ans=max(ans,b[x]+tb);
    }
    cout<<ans<<endl;
    return 0;
}