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
int check(int V[],int i,int n)
{
    int low=0,high=n-1,key=2*V[i];
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(V[mid]>key)
            high=mid-1;
        else if(V[mid]<key)
            low=mid+1;
        else
            return mid;
    }
    return high;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,ans=0;
    cin>>n;
    int V[n];
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        V[i]=abs(a);
    }
    sort(V,V+n);
    
    int l=0,r=1;
    while(l<n-1)
    {
        if(2*V[l]>=V[r])
        {
            if(r==n-1)
            {
                ans+=(r-l);
                l++;
            }
            else
                r++;
        }
        else
        {
            ans+=(r-l-1);
            l++;
        }
    }
    //cout<<endl;
    cout<<ans;
    return 0;
}