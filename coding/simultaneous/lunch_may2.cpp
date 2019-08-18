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
        string str;
        cin>>str;
        int hash[200]={0};
        for(int i=0;i<str.length();i++)
        {
            hash[str[i]]++;
        }
        int count=0;
        for(int i=0;i<200;i++)
        {
            hash[i]=hash[i]%2;
            if(hash[i]==1)
                count++;
        }
        if(count>=1 && count<=3)
            cout<<"DPS"<<endl;
        else
            cout<<"!DPS"<<endl;
    }
    return 0;
}