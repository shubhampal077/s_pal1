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
    VI boy(n),girl(m);
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>boy[i];
    cin>>m;
    for(int i=0;i<m;i++)
        cin>>girl[i];
    sort(boy.begin(),boy.end());
    sort(girl.begin(),girl.end());
    int i=0,j=0,cnt=0;
    while(i<n && j<m)
    {
        if(abs(boy[i]-girl[j])<=1)
        {
            i++;
            j++;
            cnt++;
        }
        else if(boy[i]>girl[j])
        {
            j++;
        }
        else
            i++;
    }
    cout<<cnt;
    return 0;
}