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
bool isPowerOfTwo (int x) 
{ 
  /* First x in the below expression is for the case when x is 0 */
  return x && (!(x&(x-1))); 
} 
int findhigh(int n)
{
    int k=1,high=-1;
    while((1<<(k-1))<=n)
    {
        if(!(n&(1<<(k-1))))
        {
        	
            high=k;
            //cout<<high<<endl;
        }
        k++;
        //cout<<k<<" "<<endl;
    }
    //cout<<high<<endl;
   // cout<<" guddu";
    return high;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,k,count=0;
    cin>>n;
    VI vec;
    if(n>1 && isPowerOfTwo(n))
    {
        cout<<"1"<<endl;
        cout<<findhigh(n);
    }
    else
    {
        while(1)
    {
        k=findhigh(n);
        //cout<<k<<endl;
        if(k==-1)
            break;
        else
        {
            vec.push_back(k);
            //cout<<((1<<k)-1)<<endl;
           // cout<<n<<endl;
            n=n^((1<<k)-1);
           // cout<<n<<endl;
            n++;
            //cout<<n<<endl;
            count+=2;
        }
    }
    cout<<count<<endl;
    for(auto x:vec)
    {
        cout<<x<<" ";
    }
    }
    return 0;
}