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
    int n,k;
    cin>>n>>k;
    MPII pal;
    queue<int> q;
    for(int i=0;i<30;i++)
    {
        if(n & 1<<i)
        {
            if(i>0)
                q.push(1<<i);
            pal[1<<i]++;
        }
    }
    int cnt=pal.size();
    if(k<cnt)
        cout<<"NO\n";
    else
    {
        while(cnt<k && !q.empty())
        {
            int w=q.front();
            q.pop();
            pal[w]--;
            pal[w/2]+=2;
            if(w/2>1)
            {
                q.push(w/2);
                q.push(w/2);
            }
            cnt++;
        }
        if(cnt<k)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(auto x:pal)
                for(int i=0;i<x.se;i++)
                    cout<<x.fi<<" ";
        }
    }
    return 0;
}