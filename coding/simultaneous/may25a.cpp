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
inline int tostring(string s)
{
    int count=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='+')
            count++;
    }
    return count;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s1,s2;
    cin>>s1>>s2;
    int req=tostring(s1);
    int count=0,x=0;
    for(int i=0;i<s2.size();i++)
    {
        if(s2[i]=='+')
            count++;
        if(s2[i]=='?')
            x++;
    }
    if(count>req)
        cout<<0.0<<endl;
    else
    {
        int diff=(req-count);
        double num=0;
        for(int i=1;i<(int)pow(2,x);i++)
        {
            int set=0;
            for(int j=0;j<x;j++)
            {
                if(i & (1<<j))
                    set++;
            }
            if(set==diff)
                num++;
        }
        double ans=(double)num/pow(2,x);
        cout<<fixed<<setprecision(12)<<ans<<endl;
    }
    return 0;
}