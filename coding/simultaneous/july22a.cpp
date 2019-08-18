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
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        int k=n-2;
        int flag=0,ans;
        for(k=n-2;k>=1;k--)
        {
            int j=0;
            int cnt=0;
            while(j<n && cnt<2)
            {
                if(A[j]>k)
                {
                    cnt++;
                }
                j++;
            }
            if(cnt==2)
            {
                ans=k;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            ans=0;
        }
        cout<<ans<<endl;
    }
    return 0;
}