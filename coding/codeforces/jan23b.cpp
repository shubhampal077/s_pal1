#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,maxi,sec;
    cin>>n;
    ll arr[n];
    ll hash[10004]={0};
    ll visited[10004]={0};
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        hash[arr[i]]++;
    }
        
    maxi=*max_element(arr,arr+n);
    for(i=0;i<n;i++)
    {
        if(maxi%arr[i]==0 && visited[arr[i]]==0)
        {
            hash[arr[i]]--;
            visited[arr[i]]=1;
        }
    }
    vector<ll> v;
    for(i=0;i<n;i++)
    {
        if(hash[arr[i]]==1)
        {
            v.push_back(arr[i]);
        }
    }
    sec=*max_element(v.begin(),v.end());
    cout<<maxi<<" "<<sec;
}