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
    int n,T;
    cin>>n>>T;
    vector<pair<int,int>> arr[n+1];
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        int b;
        cin>>b;
        arr[a].push_back({b,i});
    }
    set<pair<int,int>> s;
    int sum=0;
    int k;
    VI vec;
    for(k=n;k>0;k--)
    {
        for(auto &x:arr[k])
        {
            sum+=(x.first);
            s.emplace(x);
        }
        while(s.size()>k)
        {
            sum-=((--s.end())->first);
            s.erase(--s.end());
        }
        
        if(s.size()==k && sum<=T)
        {
            for(auto x:s)
            {
                vec.push_back(x.second);
            }
            break;
        }
    }
    cout<<k<<"\n"<<k<<endl;
    for(auto x:vec)
        cout<<x<<" ";
    cout<<endl;
    return 0;
}