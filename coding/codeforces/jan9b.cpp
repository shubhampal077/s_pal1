#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,i,h,j,flag=0,m;
    cin>>n>>k;
    ll arr[n],color[5001]={0};
    for(i=0;i<n;i++)
        cin>>arr[i];
    vector<pair<ll,ll>> vec1,vec2;
    for(i=0;i<n;i++)
        vec1.push_back(make_pair(arr[i],i));
    if(k>n)
        cout<<"NO\n";
    else
    {
        sort(vec1.begin(),vec1.end());
        for(i=0,h=1;i<n-1;i++)
        {
            if(vec1[i].first==vec1[i+1].first){
                h++;
                if(h>k)
                {
                    cout<<"NO\n";
                    flag=1;
                    break;
                }
            }
            else
            {
                h=1;
            }
        }
        if(flag!=1)
        {
            cout<<"YES\n";
            for(i=0,m=1;i<n;i++)
            {
                if(m==k+1)
                    m=1;
                vec2.push_back(make_pair(vec1[i].second,m));
                m++;
            }
            sort(vec2.begin(),vec2.end());
            for(i=0;i<n;i++)
                cout<<vec2[i].second<<" ";
        }
    }
    return 0;
}