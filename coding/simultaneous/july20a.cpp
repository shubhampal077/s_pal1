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
    int n,m;
    cin>>n>>m;
    int A[n+1],dp[n+1];
    for(int i=1;i<=n;i++)
        cin>>A[i];
    dp[n]=1;
    unordered_set<int> s;
    s.insert(A[n]);
    for(int i=n-1;i>=0;i--)
    {
        if(s.find(A[i])==s.end())
        {
            dp[i]=dp[i+1]+1;
            s.insert(A[i]);
        }
        else
            dp[i]=dp[i+1];
    }
    for(int i=1;i<=m;i++)
    {
        int a;
        cin>>a;
        cout<<dp[a]<<endl;
    }
    return 0;
}