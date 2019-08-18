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
bool check(string str)
{
    int a=0,b=0,c=0;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='A')
            a++;
        else if(str[i]=='B')
            b++;
        else c++;

    }
    if(a>0 && b>0 && c>0)
        return true;
    else
        return false;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,a;
    string str;
    cin>>n;
    vector<pair<int,string>> vec(n);
    for(int i=0;i<n;i++)
    {
        cin>>a>>str;
        vec[i].first=a;
        vec[i].second=str;
    }
    int mini_a=INT32_MAX,mini_b=INT32_MAX,mini_c=INT32_MAX,res=INT32_MAX,mini_all=INT32_MAX;
    for(int i=0;i<n;i++)
    {
        if(vec[i].second.length()==1)
        {
            if(vec[i].second=="A")
                mini_a=min(vec[i].first,mini_a);
            else if(vec[i].second=="B")
                mini_b=min(vec[i].first,mini_b);
            else
                mini_c=min(vec[i].first,mini_c);
        }
        if(vec[i].second.length()==3)
            mini_all=min(mini_all,vec[i].first);
    }
    res=min(res,min(mini_all,mini_a+mini_b+mini_c));
    int mini_2=INT32_MAX;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            string s=vec[i].second+vec[j].second;
            if(check(s))
                mini_2=min(mini_2,vec[i].first+vec[j].first);
        }
    }
    res=min(res,mini_2);
    cout<<res;
    return 0;
}