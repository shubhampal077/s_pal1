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
auto split(string s)
{
    vector<pair<char,int>> v;
    char c=s[0];
    int cnt=1;
    for(int i=1;i<=s.length();i++)
    {
        if(s[i]!=c)
        {
            v.PB({c,cnt});
            c=s[i];
            cnt=1;
        }
        else
            cnt++;
    }
    return v;
}
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
    while(n--)
    {
        string s,t;
        cin>>s>>t;
        auto ss=split(s);
        auto tt=split(t);
        if(ss.size()!=tt.size())
            cout<<"NO\n";
        else
        {
            int i=0;
            bool flag=true;
            while(i<ss.size())
            {
                if(ss[i].first==tt[i].first && ss[i].second<=tt[i].second)
                    i++;
                else
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
    return 0;
}