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
int n;
bool check(int arr[])
{
    int sum1=0,sum2=0;
    for(int i=0;i<=n-1;i++)
        sum1+=arr[i];
    for(int i=n;i<2*n;i++)
        sum2+=arr[i];
    if(sum1==sum2)
        return true;
    else
        return false;
}
void rotate(int a[])
{
    int temp=a[0],i;
    for(i=0;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    a[i]=temp;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    cin>>n;
    int a[2*n];
    for(int i=0;i<2*n;i++)
        cin>>a[i];
    bool flag=true;
    int i=0,j=n;
    while(i<=n-1 && j<=2*n-1)
    {
        if(a[i]!=a[j])
        {
            flag=false;
            break;
        }
    }
    if(flag==true)
        cout<<"-1\n";
    else
    {
        while(check(a))
        {
            rotate(a);
        }
        for(int i=0;i<2*n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}