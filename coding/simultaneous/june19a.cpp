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
    int n,a;
    cin>>n;
    int count_1=0,count_2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1)
            count_1++;
        else    count_2++;
    }
    if(count_1==0)
    {
        for(int i=0;i<n;i++)
            cout<<"2 ";

    }
    else if(count_2==0)
    {
        for(int i=0;i<n;i++)
            cout<<"1 ";
    }
    else
    {
        cout<<"2 1 ";
        count_1--;count_2--;
        for(int i=1;i<=count_2;i++)
            cout<<"2 ";
        for(int i=1;i<=count_1;i++)
            cout<<"1 ";
    }
    return 0;
}