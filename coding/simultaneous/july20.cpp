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
bool comp1(pair<int,pair<int,int>> &a,pair<int,pair<int,int>> &b)
{
    return a.second.first<b.second.first;
}
bool comp2(pair<int,pair<int,int>> &a,pair<int,pair<int,int>> &b)
{
    return a.first<b.first;
}
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
    VI shops(n);
    for(int i=0;i<n;i++)
        cin>>shops[i];
    sort(shops.begin(),shops.end());
    int q;
    cin>>q;
    vector<pair<int,pair<int,int>> > v;
    v.push_back({0,{0,0}});
    for(int i=1;i<=q;i++)
    {
        int a;
        cin>>a;
        v.push_back({i,{a,0}});
    }
    sort(v.begin(),v.end(),comp1);
    int j=0,cnt;
    for(int i=1;i<=q;i++)
    {
        cnt=0;
        while(j<n && shops[j]<=v[i].second.first)
        {
            j++;
            cnt++;
        }
        v[i].second.second=v[i-1].second.second+cnt;
    }
    sort(v.begin(),v.end(),comp2);
    for(int i=1;i<=q;i++)
    {
        cout<<v[i].second.second<<endl;
    }
    return 0;
}