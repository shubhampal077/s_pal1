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
bool comp(int a,int b)
{
    return a>b;
}
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
     vector<int > arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end(),comp);
    if(arr[0]>=(arr[1]+arr[2]))
        cout<<"NO\n";
    else
    {
        int flag=0;
        for(int i=n-1;i>=2;i--)
        {
            if(arr[1]+arr[i]>arr[0])
            {
                flag=1;
                swap(arr[i],arr[n-1]);
                break;
            }
        }
        cout<<"YES\n";
        for(auto x:arr)
            cout<<x<<" ";
    }
    return 0;
}