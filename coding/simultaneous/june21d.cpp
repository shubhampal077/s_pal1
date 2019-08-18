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
bool comp(pair<int,int>&a,pair<int,int>&b)
{
    return a.second<b.second;
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
    vector<pair<int,int>> A;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        if(a>=0)
        {
            a=(-a-1);
        }
        A.PB({a,i});
    }
    if(A.size()%2!=0)
    {
        sort(A.begin(),A.end());
        int k=0;
        if(A[k].first==-1)
        {
            A[k].first=0;
        }
        else
        A[k].first=(-A[k].first-1);
        sort(A.begin(),A.end(),comp);
    }
    for(int i=0;i<n;i++)
        cout<<A[i].first<<" ";
    return 0;
}