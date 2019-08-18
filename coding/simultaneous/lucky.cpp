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
inline int bin(string str)
{
    int ans=0LL;
    for(int i=0;i<str.size();i++)
    {
        ans=2LL*ans + (int)(str[i]-'0');
    }
    //cout<<ans<<" "<<(1<<str.size())<<endl;
    return ((1<<str.size()) + ans - 1LL);
}
inline string str(string n)
{
    string ans="";
    for(int i=0;i<n.size();i++)
    {
        if(n[i]=='4')
            ans.append("0");
        else
            ans.append("1");
    }
    //cout<<ans<<endl;
    return ans;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string n;
    cin>>n;
    cout<<bin(str(n));
    return 0;
}