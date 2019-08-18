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
    int n,q;
    cin>>n>>q;
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    while(q--)
    {
        deque<int> dq;
        for(int i=0;i<n;i++)
            dq.push_back(a[i]);
        int qu;
        cin>>qu;
        int a1,b1;
        while(qu--)
        {
           // for(auto x:dq)
            //    cout<<x<<" ";
            //cout<<endl;
            auto it=dq.begin();
            int a=*it;
            it++;
            int b=*it;
            if(a>b)
            {
                a1=a;b1=b;
                dq.erase(it);
                dq.push_back(b);
            }
            else
            {
                a1=a;b1=b;
                dq.push_back(a);
                dq.pop_front();
            }
        }
        cout<<a1<<" "<<b1<<endl;

    }
    return 0;
}