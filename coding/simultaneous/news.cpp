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
const int N=500005;
int n,m;
vector<int> adj[N];
int solve(int i)
{
    static bool visited[N]={0};
    static int count=0;
    if(!visited[i])
    {
        visited[i]=true;
        count++;
        for(auto &x:adj[i])
        {
            if(visited[x]==false)
            {
            //	cout<<x<<endl;
                solve(x);
            }
        }
    }
    return count;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    cin>>n>>m;
    
    for(int i=1;i<=m;i++)
    {
        int k;
        cin>>k;
        int arr[k];
        for(int j=0;j<k;j++)
        {
            cin>>arr[j];
        }
        for(int j=0;j<k-1;j++)
        {
            for(int d=j+1;d<k;d++)
            {
                adj[arr[j]].PB(arr[d]);
                adj[arr[d]].PB(arr[j]);
            }
        }
    }
    
    for(int i=1;i<=n;i++)
    {
    	//int count=0;
    	
       cout<<solve(i)<<" ";
    }
    //cout<<solve(7);
    //cout<<solve(1)<<" "<<solve(2)<<" "<<solve(3)<<" "<<solve(4)<<" "<<solve(5)<<" "<<solve(6)<<" "<<solve(7);
    return 0;
    
}