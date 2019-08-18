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
const int T=100;
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
    VI t(n),count(T+1,0),presum(n,0);
    for(int i=0;i<n;i++)
    {
        cin>>t[i];
    }
    presum[0]=t[0];
    for(int i=1;i<n;i++)
    {
        presum[i]=presum[i-1]+t[i];
    }
    for(int i=0;i<n;i++)
    {
        int k=0,diff=presum[i]-m;
        if(diff>0)
        {
            for(int j=T;j>0;j--)
            {
                int x=j*count[j];
                if(diff<=x)
                {
                    k+=(diff+j-1)/j;
                    break;
                }
                k+=count[j];
                diff-=x;
            }
        }
        count[t[i]]++;
        cout<<k<<" ";
    }
    return 0;
}