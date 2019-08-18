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
        string s,t;
        cin>>s>>t;
        stack<char> s1,t1;
        for(int i=0;i<s.length();i++)
        {
            s1.push(s[i]);
        }
        for(int i=0;i<t.length();i++)
        {
            t1.push(t[i]);
        }
        char prev='2';
        int flag=0;
        while(!s1.empty() && !t1.empty() && flag!=1)
        {
            if(s1.top()==t1.top())
            {
                prev=t1.top();
                s1.pop();t1.pop();
            }
            else
            {
                if(t1.top()==prev)
                    t1.pop();
                else
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1 || !t1.empty())
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }
    return 0;
}