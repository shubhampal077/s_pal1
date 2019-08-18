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
        int n,d;
        cin>>n>>d;
        int A[n];
        for(int i=0;i<n;i++)
        {    cin>>A[i];
                //temp[i]=A[i];
        }
        int sw=0;
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(abs(A[j]-A[i])==d && A[i]>A[j])
                {
                    swap(A[i],A[j]);
                    sw++;
                }
            }
        }
        //sort(temp,temp+n);
        bool flag=true;
        for(int i=1;i<n;i++)
        {
            if((A[i]<A[i-1]))
            {
                flag=false;
                break;
            }
        }
        if(flag==false)
            cout<<"-1"<<endl;
        else
            cout<<sw<<endl;
    }
    return 0;
}