#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,ans;

    cin>>n;
    ll arr[n+1];
    for(i=1;i<=n;i++)
        cin>>arr[i];
    sort(arr+1,arr+n+1);
    for(i=2,ans=1;i<=n;i++)
    {
        if(arr[i]<=ans)
            continue;
        else ans++;
    }
    cout<<ans+1;
    return 0;
}