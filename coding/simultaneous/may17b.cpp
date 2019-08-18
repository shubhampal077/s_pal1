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
    int k,n,m,flag=0;
    cin>>k;
    for(int i=1;i<k;i++)
    {
        if(k%i==0)
        {
            if(i>=5 && k/i>=5)
            {
                n=i;
                m=n/i;
                flag=1;
                break;
            }
        }
    }
    if(flag==0)
        cout<<"-1";
    else
    {
        char vow[]={'a','e','i','o','u'};
        char mat[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                mat[i][j]=vow[j%5 + i];
                cout<<mat[i];
            }
        }
    }
    return 0;
}