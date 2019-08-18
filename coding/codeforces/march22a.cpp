#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,days=0,low,up;
    cin>>n;
    ll arr[n+1];
    for(ll i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
    for(low=1,up=arr[low];low<=n;)
    {
        if(low==up)
            days++;
        low++;
        if(arr[low]>up)
            up=arr[low];
    }
    cout<<days;
    return 0;
}