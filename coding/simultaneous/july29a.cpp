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
bool check(int k)
{
    int cnt=0;
    if(k==0)
        return true;
    while(k)
    {
        k=k&(k-1);
        cnt++;
    }
    if(cnt%2==0)
        return true;
    return false;
}
int calc(int A[],int n)
{
    int max=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            int k=0;
            for(int start=i;start<=j;start++)
            {
                k^=A[start];
            }
            if(check(k))
            {
                if((j-i+1)>max)
                    max=j-i+1;
            }
        }
    }
    return max;
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
    for(int test=1;test<=t;test++)
    {
        
        int n,q;
        cin>>n>>q;
        int A[n];
        for(int i=0;i<n;i++)
            cin>>A[i];
        int ans[q];
        /*vector<vector<int>> dp(n,vector<int>(n));
        for(int i=0;i<n;i++)
        {
            dp[i][i]=A[i];
        }
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                dp[i][j]=dp[i][j-1]^A[j];
            }
        }*/
        for(int i=0;i<q;i++)
        {
            int p,v;
            cin>>p>>v;
            A[p]=v;
            ans[i]=calc(A,n);
        }
        cout<<"Case #"<<test<<": ";
        for(int i=0;i<q;i++)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}