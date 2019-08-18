#include<bits/stdc++.h>
#define sc second
#define fr first

#define ppb pop_back
#define pb push_back
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
bool orderby(pair<ll,pair<ll,ll>> &a,pair<ll,pair<ll,ll>> &b)
{
    if(a.first>b.first)
        return true;
    else    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    /*ll n,q,i,j,x,y,ans=0;
    cin>>n>>q;
    vector<ll> A(n+2,0),B(n+2,0);
    vector<pair<ll,pair<ll,ll>>> g;
    for(i=0;i<q;i++)
    {
        cin>>x>>y;
        g.push_back({y-x+1,{x,y}});
    }
    sort(g.begin(),g.end());
    reverse(g.begin(),g.end());
    for(ll i=0;i<q;i++)
    {
        ll a=g[i].second.first;
        ll b=g[i].second.second;
        for(ll j=a;j<=b;j++)
        {
            if(A[j]==true)
            {
                g[i].first--;

            }
            else
                A[j]=true;

        }
    }
    sort(g.begin(),g.end());
    reverse(g.begin(),g.end());
    for(ll i=0;i<q-2;i++)
    {
        ll a=g[i].second.first;
        ll b=g[i].second.second;
        for(ll j=a;j<=b;j++)
        {
            if(B[j]==false)
            {
                ans++;
                B[j]=true;
            }
        }
        
    }
    cout<<ans<<endl;*/
    int n, k;
    cin >> n >> k;
    ll ans = 0;
    vector<int> was(n + 2), used(n + 2);
    vector<pair<int, pair<int, int>>> g;
    for (int i = 0; i < k; i++) {
        int x, y;
        cin >> x >> y;
        g.pb({y - x + 1, {x, y}});
    }
    sort(g.begin(), g.end());
    reverse(g.begin(), g.end());
    for (int i = 0; i < k; i++) {
        int a = g[i].sc.fr;
        int b = g[i].sc.sc;
        //cout << a <<   " " << b <<" " << g[i].fr << endl;
        for (int j = a; j <= b; j++)  {
            if (was[j] == true)
                g[i].fr--, was[j] = true;
            else
                was[j] = true;    
        }        
    }
    sort(g.begin(), g.end());
    reverse(g.begin(), g.end());
    for (int i = 0; i < k - 2; i++) {
        int a = g[i].sc.fr;
        int b = g[i].sc.sc;
        //cout << a <<   " " << b <<" " << g[i].fr << endl;
        for (int j = a; j <= b; j++)
            if (used[j] == false)
                ans++, used[j] = true;  
    }
    cout << ans;
    return 0;
}