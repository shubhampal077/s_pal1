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
    VI a,b,q;
    for(int i=0;i<n;i++)
    {
        int b;
        cin>>b;
        a.push_back(b);
    }
    while(a.size()>=1)
    {
        int cnt=0;
        for(int i=0;i<a.size()-1;i+=2)
        {
            if((a[i]+a[i+1])>=10)
                cnt++;
            int c=(a[i]+a[i+1])%10;
            b.PB(c);
        }
        q.push_back(cnt);
        a.clear();
        for(int i=0;i<b.size();i++)
            a.PB(b[i]);
        b.clear();
    }
    for(int i=0;i<q.size()/2;i++)
    {
        swap(q[i],q[q.size()-1-i]);
    }
    for(int i=1;i<q.size();i++)
    {
        q[i]=q[i]+q[i-1];
    }
    /*for(auto x:q)
        cout<<x<<" ";
        cout<<endl;*/
    int qu;
    cin>>qu;
    for(int i=0;i<qu;i++)
    {
        int l,r;
        cin>>l>>r;
        int index=(int)log2(r-l+1);
       //cout<<index<<" ";
       if(index==0)
        cout<<q[index]<<endl;
        else cout<<q[index-1]<<endl;
    }
    return 0;
}