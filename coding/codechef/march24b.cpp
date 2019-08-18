#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
bool comp(pair<ll,pair<ll,ll>> &p1,pair<ll,pair<ll,ll>> &p2)
{
    if(p1.first!=p2.first)
        return p1.first<p2.first;
    else
        return p1.second.first<p2.second.first;
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    ll t,i,j,k;
    cin>>t;
    while(t--)
    {
        set<string> S;
        string home[12],away[12],vs;
        ll hgoal[12],agoal[12];
        for(i=0;i<12;i++){
            //scanf("%s%d vs. %d %s",home[i],&hgoal[i],&agoal[i],away[i]);
            cin>>home[i]>>hgoal[i]>> vs >>agoal[i]>>away[i];
            
            S.insert(home[i]);
            //cout<<home[i]<<hgoal[i]<<agoal[i]<<away[i]<<endl;
        }
        //set<string>::iterator it=S.begin();
        //for(;it!=S.end();it++)
        //cout<<*it<<" ";
        //cout<<endl;
        
        unordered_map<string,ll> mp;
        set<string>::iterator it=S.begin();
        for(i=0;i<S.size();i++,it++)
        {
            mp.emplace(*it,i);
            //cout<<*it<<" "<<i<<endl;
        }
        //unordered_map<string,ll>::iterator it=mp.begin();
        //set<string>::iterator it=S.begin();
        pair<ll,pair<ll,ll>> li[4];
        for(i=0;i<4;i++)
        {
            li[i].first=0;
            li[i].second.first=0;
            li[i].second.second=i;
        }
        ll x,y;
        for(j=0;j<12;j++)
        {
            x=mp[home[j]];
            y=mp[away[j]];
            //cout<<"\n"<<x<<" "<<y<<endl;
            if(hgoal[j]>agoal[j])
            {
                li[x].first+=3;
            }
            else if(hgoal[j]<agoal[j])
            {
                li[y].first+=3;
            }
            else{
                li[x].first+=1;
                li[y].first+=1;
            }
            li[x].second.first+=(hgoal[j]-agoal[j]);
            li[y].second.first+=(agoal[j]-hgoal[j]);
            

        }
        sort(li,li+4,comp);
        
        //for(i=0;i<4;i++)
        //{
        //	set<string>::iterator it1=S.begin();
        //	ll w=li[i].second.second;
        //	std::advance(it1,w);
        //	cout<<li[i].first<<" "<<li[i].second.first<<" "<<*it1<<endl;
       // }
        set<string>::iterator it1=S.begin();
        set<string>::iterator it2=S.begin();
        ll a=li[3].second.second,b=li[2].second.second;
        std::advance(it1,a);
        std::advance(it2,b);
        cout<<*it1<<" "<<*it2<<endl;
    }
    return 0;
}