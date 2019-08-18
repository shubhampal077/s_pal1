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
        int n;
        cin>>n;
        int D[n];
        for(int i=0;i<n;i++)
            cin>>D[i];
        sort(D,D+n);
        int prod=D[0]*D[n-1];
        int index;
        int j;
        for(j=1;j<n;j++)
        {
            if(D[j]%D[0]!=0)
            {
                index=j-1;
                break;
            }

        }
        if(j==n)
            index=n-1;
        if(n>1)
            cout<<D[0]*D[index]<<endl;
        else
            cout<<D[0]*D[0]<<endl;
        /*
        for(int i=0,j=n-1;i<n/2-1;i++,j--)
        {
            int pr=D[i]*D[j];
            if(prod!=pr)
            {
                flag=1;
                break;
            }
        }
        if(n%2==0)
        {
            int pr=D[n/2-1]*D[n/2];
            if(pr!=prod)
            {
                flag=1;
            }
        }
        else
        {
            int pr=D[n/2]*D[n/2];
            if(pr!=prod)
            {
                flag=1;
            }
        }
        if(flag==1)
            cout<<"-1"<<endl;
        else
            cout<<prod<<endl;
            */
    }
    return 0;
}