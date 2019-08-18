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
    priority_queue<int,vector<int>> pq;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        pq.push(a);
    }
    int a,b;
    while(!pq.empty() && pq.top()!=0)
    {
        a=pq.top();
        pq.pop();
        b=pq.top();
        pq.pop();
        pq.push(abs(a-b));
    }
    if(pq.top()==0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    return 0;
}