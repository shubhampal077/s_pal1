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
int knap(int W,int wt[],int val[],int n)
{
    int K[n+1][W+1];
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=W;j++)
        {
            if(i==0 || j==0)
            {
                K[i][j]=0;
            }
            else if(W<wt[i-1])
                K[i][j]=K[i-1][j];
            else
                K[i][j]=max(val[i-1]+K[i-1][j-wt[i-1]],K[i-1][j]);
        }
    }
    return K[n][W];
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int val[]={60,100,120};
    int wt[]={10,20,30};
    int W=50,n=sizeof(val)/sizeof(val[0]);
    //cin>>W;
    cout<<"maximum profit is : "<<knap(W,wt,val,n);
    return 0;
}