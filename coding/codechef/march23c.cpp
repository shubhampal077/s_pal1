#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
bool comp(pair<ll,ll> &p1,pair<ll,ll> &p2)
{
    if(p1.second!=p2.second)
        return p1.second<p2.second;
    else    
        return p1.first<p2.first;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,a,b;
    cin>>n>>k;
    vector<pair<ll,ll>> vec;
    for(ll i=0;i<n;i++)
    {
        cin>>a>>b;
        vec.push_back(make_pair(a,b));
    } 
    sort(vec.begin(),vec.end(),comp);
   // for(ll i=0;i<n;i++)
//	cout<<vec[i].first<<" "<<vec[i].second<<endl;
//	cout<<endl;
	priority_queue<ll,vector<ll>,greater<ll>> pq;
    ll ans=0,beauty,sum=0,len=0;
    for(ll i=n-1;i>=0;i--)
    {
        beauty=vec[i].second;
        sum=len+vec[i].first;
        ans=max(ans,sum*beauty);
        len+=vec[i].first;
        pq.push(vec[i].first);
        if(pq.size()>=k)
        {
        	//cout<<pq.top();
            len-=pq.top();
            pq.pop();
        }
    }
    cout<<ans;
    return 0;
}