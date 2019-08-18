#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
//#define int long long 
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
typedef long double ld;
typedef long long int lli;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    lli t,n;
    ld a,b,c,d;
    ld diff=0.0;
    cin>>t;
    while(t--){
        cin>>n;
        lli arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];
        a=(ld)arr[0],b=(ld)arr[1],c=(ld)arr[2],d=(ld)arr[3];
        diff = b-a;
        if((c-b==d-c) && (d-c!=b-a)){
            diff=c-b;
            a=b-diff;
         
        }
        else if(((c-a)/2.0==d-c) && ((d-a)/3.0 ==d-c) && (d-c!=b-a)){
             diff = d-c;
        }
        for(int i=0;i<n;i++)cout<<(lli)(a + (i)*diff)<<" ";
        cout<<endl;
    }
    return 0;
}