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
        int n,k,cnt=0;
        cin>>n>>k;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
            if(A[i]%2!=0)
                cnt++;
        }
        if(cnt<k || cnt%2!=k%2)
            cout<<"NO\n";
        else
        {
            int q=0;
            cout<<"YES\n";
            for(int i=0;i<n;i++)
            {
                if(q==k-1)
                    break;
                if(A[i]%2!=0){
                    cout<<i+1<<" ";
                q++;
                }
            }
            cout<<n<<endl;
        }
    }
    return 0;
}