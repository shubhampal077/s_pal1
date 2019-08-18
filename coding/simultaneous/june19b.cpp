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
    int a[4],d;
    cin>>a[1]>>a[2]>>a[3]>>d;
    sort(a+1,a+4);
    int t1=d-(abs(a[1]-a[2]));
    int t2=d-abs(a[2]-a[3]);
    if(t1<0)
        t1=0;
    if(t2<0)
        t2=0;
    cout<<t1+t2;
    return 0;
}