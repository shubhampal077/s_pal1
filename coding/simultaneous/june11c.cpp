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
    int n,k,res=0;
    cin>>n>>k;
    VI prob(n),status(n);
    for(int i=0;i<n;i++)
        cin>>prob[i];
    for(int i=0;i<n;i++)
        cin>>status[i];
    VI temp(n-k+1);
    for(int i=0;i<n;i++)
    {
        if(status[i]==1)
        {
            res+=prob[i];
            prob[i]=0;
        }
        
    }
    int r=0;
    for(int i=0;i<k;i++)
        r+=prob[i];
    temp[0]=r;
    for(int i=1;i<n-k+1;i++)
    {
        temp[i]=temp[i-1]+prob[i+k-1]-prob[i-1];
    }
    int maxi=*max_element(temp.begin(),temp.end());
    cout<<res + maxi;
    return 0;
}