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
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int a[n+1];
        VI v;
        for(int i=1;i<=n;i++)
        {
            cin>>a[i];
            v.PB(a[i]);
            
        }
        sort(v.begin(),v.end());
        //map<int,int> mp;
        
        for(int j=1;j<=q;j++)
        {
            int x,y;
            cin>>x>>y;
            int mincost=abs(a[y]-a[x])+y-x;
            int len=upper_bound(v.begin(),v.end(),max(a[x],a[y]))-v.begin();
            len-=lower_bound(v.begin(),v.end(),min(a[x],a[y]))-v.begin();
            cout<<mincost<<" "<<len<<endl;
        }
    }
    return 0;
}