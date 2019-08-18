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
    string str;
    cin>>str;
    int z=0,o=0;
    for(int i=0;i<n;i++)
    {
        if(str[i]=='0')
            o++;
        else
            z++;
    }
    if(z!=o)
    {
        cout<<"1"<<endl;
        cout<<str<<endl;
    }
    else
    {
        cout<<"2"<<endl;
        cout<<str[0]<<" "<<str.substr(1,n-1)<<endl;
    }
    return 0;
}