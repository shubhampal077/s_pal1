#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,i,prev,len,j,ans=0;
    string str;
    cin>>n>>k;
    cin>>str;
    vector<pair<ll,ll>> vec;
    ll arr[200]={0};
    for(j=0,i=0;i<n-1;i++)
    {
        if(str[i]=str[i+1])
        {
            vec.push_back(make_pair(j,i));
            j=i+1;
        }
    }
    vec.push_back(make_pair(i,n-1));
    for(i=0;i<vec.size();i++)
    {
        len=(vec[i].second-vec[i].first)/k;
        arr[str[vec[i].first]]+=(len);
    }

    cout<<*max_element(arr,arr+200);
    return 0;
}