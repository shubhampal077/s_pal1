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
    int t,n,z;
    cin>>t;
    while(t--)
    {
        cin>>n>>z;
        int A[n],B[n];
        for(int i=0;i<n;i++)
            cin>>A[i];
        for(int i=1;i<=z;i++)
        {
            for(int j=0;j<=n-2;j++)
            {
                if(A[j]==0 && A[j+1]==1){
                    swap(A[j],A[j+1]);
                    j++;
                    }
            }
        }
        for(int i=0;i<n;i++)
            cout<<A[i]<<" ";
        cout<<endl;
    }
    return 0;
}