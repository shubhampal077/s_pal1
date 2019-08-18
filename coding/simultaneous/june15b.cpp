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
    VI v({4,8,15,16,23,42});
    int n;
    cin>>n;
    VI a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        a[i]=lower_bound(v.begin(),v.end(),a[i])-v.begin();
    }
    VI seq(6,0);
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
            seq[a[i]]++;
        else
        {
            if(seq[a[i]-1]>0)
            {
                seq[a[i]-1]--;
                seq[a[i]]++;
            }
        }
    }
    cout<<n-seq[5]*6;
    return 0;
}