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
bool mycomp(pair<int,int > &a,pair<int,int > &b)
{
    return a.second>b.second;
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
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> vec;
        for(int i=0;i<n;i++)
        {
            int d,v;
            cin>>d>>v;
            vec.push_back({d,v});
        }
        sort(vec.begin(),vec.end(),mycomp);
        int ans=vec[0].second;
        int x=vec[0].first;
        int j=1;
        while(j<n && vec[j].first==x)
        {
            j++;
        }
        ans+=vec[j].second;
        cout<<ans<<endl;


    }
    return 0;
}