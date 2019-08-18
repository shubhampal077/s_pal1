#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,a,count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<pair<ll,ll>> vec;
        for(i=0;i<n;i++)
        {
            cin>>a;

            vec.push_back({a,i});
        }
        sort(vec.begin(),vec.end());
        ll flag=0;
        count=1;
        for(ll j=0;j<n-1;j++)
        {
            
            if(vec[j].first==vec[j+1].first)
                count++;
            else
                count=1;
                if(count>n/2)
            {
                flag=1;
                break;
            }
          //cout<<count<<" ";
        }
        //cout<<endl;
        
        if(flag==1 || n==1)
            cout<<"No\n";
        else
        {
            vector<pair<ll,ll>> ans;
            for(ll i=0;i<n;i++)
            {
                ans.push_back({vec[i].second,vec[(i+n/2)%n].first});
            }
            sort(ans.begin(),ans.end());
            cout<<"Yes\n";
            for(ll j=0;j<n;j++)
                cout<<ans[j].second<<" ";
            cout<<endl;
        }
        
    }
    return 0;
}