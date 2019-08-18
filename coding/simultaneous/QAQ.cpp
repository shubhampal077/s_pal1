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
    int sum=0;
    string s;
    cin>>s;
    if(s.length()==1 || s.length()==2)
    {
        cout<<"0";
        return 0;
    }
    for(int i=0;i<s.length()-2;i++)
    {
        if(s[i]=='Q')
        {
            for(int j=i+1;j<s.length()-1;j++)
            {
                if(s[j]=='A')
                {
                    for(int k=j+1;k<s.length();k++)
                    {
                        if(s[k]=='Q')
                        {
                            //cout<<i<<" "<<j<<" "<<k<<endl;
                            sum++;
                        }
                    }
                }
            }
        }
    }
    cout<<sum;
    return 0;
}