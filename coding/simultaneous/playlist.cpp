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
int bin(int low,int high,int key,VI cum)
{
    if(low<=high)
    {
        int mid=(low+high)/2;
        if(cum[mid]>key)
            return bin(low,mid-1,key,cum);
        else if(cum[mid]<key)
            return bin(mid+1,high,key,cum);
        else
            return mid;
    }
    else
        return low;
}
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
    vector<pair<int,int>> vec;
    VI cum(n+1,0);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        vec.PB({a,b});
        cum[i+1]=cum[i]+a*b;
    }
    int moment[m+1];
    int low=1,high=m;
    for(int i=1;i<=m;i++)
    {
        cin>>moment[i];
        int low=bin(low,high,moment[i],cum);
        cout<<low<<" ";
    }
    
    return 0;
}