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
        int n,b;
        cin>>n;
        
        if(n>=1 && n<10)
            b=n;
        else if(n==10)
            b=9;
        else if(n>10 && n<=19)
            b=n;
        else
        {
            string str=to_string(n);
            string ans;
            bool flag=true;
            for(int i=1;i<str.length();i++)
            {
                if(str[i]!='9')
                {
                    flag=false;
                    break;
                }
            }
            if(flag==true)
                ans=str;
            else
            {
                int a=((str[0]-'0')-1);
                string d=to_string(a);
                for(int i=1;i<str.length();i++)
                    ans.append("9");
                ans=d+ans;
            }
            b=stoi(ans);

        }
        
        cout<<b<<endl;
        
    }
    return 0;
}