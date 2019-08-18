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
    int n;
    cin>>n;
    int hash[150]={0};
    for(int i=1;i<=n;i++)
    {
        string str;
        cin>>str;
        hash[str[0]]++;
    }
    int sum=0;
    for(int i=0;i<150;i++)
    {
        if(hash[i]>0)
        {
            int a=hash[i]/2;
            if(hash[i]%2==0)
            {
                sum+=(a*a-a);
            }
            else
                sum+=(a*a);
        }
    }
    cout<<sum;
    return 0;
}