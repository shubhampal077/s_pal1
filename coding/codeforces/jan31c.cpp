#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,i,j,k,kind,quant,q,alp,cost1,index,flag;
    cin>>n>>m;
    ll dish[n+1];
    ll cost[n+1];
    for(i=1;i<=n;i++)
    {
        cin>>dish[i];
        //cin>>cost[i];
    }
    for(i=1;i<=n;i++)
        cin>>cost[i];
    vector<pair<ll,ll>> v1,v2;
    map<ll,ll> mp;
    for(i=1;i<=n;i++){
        v1.push_back(make_pair(cost[i],dish[i]));
        v2.push_back(make_pair(cost[i],i));
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(i=0;i<n;i++)
        mp[v2[i].second]=i;
    for(k=1;k<=m;k++)
    {
        cin>>kind>>q;
        quant=0;cost1=0;
        index=mp[kind];
        flag=0;
        while(quant<q)
        {
            if(flag==0)
            {
                if(v1[index].second>=q)
                {
                    v1[index].second-=q;
                    quant=q;
                    cost1=v1[index].first*q;
                    break;
                }
                else
                {
                    v1[index].second=0;
                    quant=v1[index].second;
                    cost1+=(quant*v1[index].first);
                    flag=1;
                    i=0;
                    continue;
                }
            }
            if(i==index)
                continue;
            if(i==n)
            {
                cost1=0;
                break;
            }
            if(v1[i].second>=(q-quant))
            {
                v1[i].second-=(q-quant);
                quant+=(q-quant);
                cost1+=((q-quant)*v1[i].first);
                break;
            }
            else{
                v1[i].second=0;
                quant+=v1[i].second;
                cost1+=(v1[i].second*v1[i].first);
                i++;
            }
        }
        cout<<cost1<<endl;
    }
    return 0;
}