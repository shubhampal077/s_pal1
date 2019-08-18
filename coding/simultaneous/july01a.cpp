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
int dp[100][100];
string s[100];
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
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    int k=s[1].length();
    for(int i=1;i<=n;i++)
        s[i]=s[i]+s[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<k;j++)
            dp[i][j]= 1e9;
    }
    for(int j=0;j<k;j++)
        dp[1][j]=j;
    for(int i=2;i<=n;i++)
    {
        for(int j=0;j<k;j++)
        {
            for(int prev=0;prev<k;prev++)
            {
                if(s[i-1].substr(prev,k)==s[i].substr(j,k))
                    dp[i][j]=min(dp[i][j],dp[i-1][prev]+j);
            }
        }
    }
    int ans=1e9;
    for(int j=0;j<k;j++)
    {
        ans=min(ans,dp[n][j]);
    }
    if(ans==1e9)
        cout<<"-1\n";
    else
        cout<<ans<<endl;
    return 0;
}