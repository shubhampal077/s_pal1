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
int binary(int low,int high,int k,int ans)
{
    int mid=(low+high)/2;
    if(k>mid)
        binary(mid+1,high,k,ans-1);
    else if(k<mid)
        binary(low,mid-1,k,ans-1);
    else
        return ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,k;
    cin>>n>>k;
    int sz = 1;
    for (int i = 1; i < n; i++)
        sz = sz * 2LL + 1LL;
    cout<<binary(1,sz,k,n);
    return 0;
}