#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,j,sum;
    cin>>n;
    ll arr[n+1];
    for(i=1;i<=n;i++)
        cin>>arr[i];
    sort(arr+1,arr+(n+1));
    for(i=1,sum=0;i<=n/2;i++)
    {
        sum+=((arr[i]+arr[n-i+1])*(arr[i]+arr[n-i+1]));
    }
    cout<<sum;
    return 0;
}