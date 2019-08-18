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
    int n,m;
    cin>>n>>m;
    VI B(n),G(m);
    int sum_b=0,sum_g=0;
    for(int i=0;i<n;i++)
    {
        cin>>B[i];
        sum_b+=B[i];
    }
    for(int i=0;i<m;i++)
    {
        cin>>G[i];
        sum_g+=G[i];
    }    
    //int max_b=*max_element(B.begin(),B.end());
    int max_b=0,max_b2=0;
    for(int i=0;i<n;i++)
    {
        if(B[i]>max_b)
        {
            max_b2=max_b;
            max_b=B[i];
        }
        else if(B[i]>max_b2)
            max_b2=B[i];
    }
    int min_g=*min_element(G.begin(),G.end());
    if(max_b>min_g)
        cout<<"-1\n";
    else
    {
        int ans;
        if(max_b==min_g)
        {
            ans=sum_b*m + sum_g -max_b*m;
        }
        else
        {
           
            ans=sum_b*m + sum_g - max_b*(m-1) - max_b2;

        }
        cout<<ans<<endl;
    }
    return 0;
}