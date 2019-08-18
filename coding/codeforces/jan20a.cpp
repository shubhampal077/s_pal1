#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,t,res,maxi,mini;
    cin>>n;
    ll arr[n];
    vector<pair<ll,ll>> vec;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    maxi=*max_element(arr,arr+n);
    mini=*min_element(arr,arr+n);
    if(maxi==mini)
    {
        cout<<arr[0]<<" 0"<<endl;
    }
    else
    {
        for(t=mini-1;t<=maxi+1;t++)
        {
            for(i=0,res=0;i<n;i++)
            {
                if(arr[i]!=t)
                {
                    res+=(abs(arr[i]-t)-1);
                }
            }
            vec.push_back(make_pair(res,t));
        }
        sort(vec.begin(),vec.end());
        cout<<vec[0].second<<" "<<vec[0].first<<endl;
    }
    return 0;
}