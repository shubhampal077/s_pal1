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
#define MAX 1000000001
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,q,c;
    cin>>n>>q>>c;
    pair<pair<int,int>,int> star[n];
    for(int i=0;i<n;i++)
    {
        cin>>star[i].first.fi>>star[i].fi.se>>star[i].se;
    }
    int mat[c+1][n];
    for(int i=0;i<n;i++)
    {
        mat[0][i]=star[i].second;
    }
    for(int i=1;i<=c;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(mat[i-1][j]+1>c)
            {
                mat[i][j]=0;
            }
            else
                mat[i][j]=mat[i-1][j]+1;
        }
    }
    int t,x1,y1,x2,y2,sum;
    for(int j=1;j<=q;j++)
    {
        sum=0;
        cin>>t>>x1>>y1>>x2>>y2;
        for(int i=0;i<n;i++)
        {
            if((star[i].first.first>=x1 && star[i].first.first<=x2) && (star[i].first.second>=y1 && star[i].first.second<=y2))
            {
                sum+=(mat[(t%(c+1))][i]);
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}