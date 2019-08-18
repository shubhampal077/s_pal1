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
    int t;
    cin>>t;
    while(t--)
    {
        int r,c,flag=0;
        cin>>r>>c;
        int mat[r][c];
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                cin>>mat[i][j];
        if(mat[0][0]>=2 || mat[0][c-1]>=2 || mat[r-1][0]>=2 || mat[r-1][c-1]>=2)
        {
            flag=1;
        }
        for(int i=1;i<=c-2;i++)
        {
            if(mat[0][i]>=3 || mat[r-1][i]>=3)
            {
                flag=1;
                break;
            }
        }
        for(int i=1;i<=r-2;i++)
        {
            if(mat[i][0]>=3 || mat[i][c-1]>=3)
            {
                flag=1;
                break;
            }
        }
        for(int i=1;i<=r-2;i++)
        {
            for(int j=1;j<=c-2;j++)
            {
                if(mat[i][j]>=4)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }
        if(flag==1)
            cout<<"Unstable\n";
        else
            cout<<"Stable\n";
    }
    return 0;
}