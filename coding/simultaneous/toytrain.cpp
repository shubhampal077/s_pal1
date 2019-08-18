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
int n,m;
bool mycomp(pair<int,int> &a,pair<int,int> &b)
{
    int x=a.se-a.fi;
    int y=b.se-b.fi;
    if(x<0)
        x+=n;
    if(y<0)
        y+=n;
    return x>y;
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
    vector<PII> start[n+1];
    for(int i=1;i<=m;i++)
    {
        int a,b;
        cin>>a>>b;
        start[a].PB({a,b});
    }
    for(int i=1;i<=n;i++)
    {
        sort(start[i].begin(),start[i].end(),mycomp);
    }
    for(int i=1;i<=n;i++)
    {
        int st=i;
        int can=m;
        vector<int> train;
        vector<PII> dummy[n+1];
        //dummy.assign(start.begin(),start.end());
        for(int j=1;j<=n;j++)
        {
            for(auto x:start[j])
                dummy[j].PB(x);
        }
        for(int i=1;i<=n;i++)
        {
            for(auto x:dummy[i])
            cout<<x<<" "<<"    ";
            cout<<endl;
        }
        train.clear();
        int time=0,count=0;
        while(count<m)
        {
            if(dummy[st].size()>0){
                train.PB(dummy[st][0].se);
                dummy[st].erase(dummy[st].begin());
            }
            for(auto x=train.begin();x!=train.end();x++)
            {
                if(*x==st)
                {
                    train.erase(x);
                    x--;
                    count++;
                }
            }
            st++;
            time++;
            if(st>n)
                st-=n;
        }
        cout<<time<<" ";
        //dummy.clear();
    }
    return 0;
}