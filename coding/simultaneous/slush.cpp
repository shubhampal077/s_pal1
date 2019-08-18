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
        int n,m;
        cin>>n>>m;
        int cap[m+1];
        for(int i=1;i<=m;i++)
        {
            cin>>cap[i];
        }
        int per[n]={0};
        int mat[n][3];
        int prof=0;
        for(int i=0;i<n;i++)
        {
            cin>>mat[i][0]>>mat[i][1]>>mat[i][2];
            if(cap[mat[i][0]]>0)
            {
                prof+=mat[i][1];
                cap[mat[i][0]]--;
                per[i]=mat[i][0];
            }
        }
        int j=1;
        for(int i=0;i<n;i++)
        {
            if(per[i]==0)
            {
                while(cap[j]==0)
                    j++;
                per[i]=j;
                cap[j]--;
                prof+=mat[i][2];
            }
        }
        cout<<prof<<endl;
        for(int i=0;i<n;i++)
            cout<<per[i]<<" ";
        cout<<endl;

    }
    return 0;
}