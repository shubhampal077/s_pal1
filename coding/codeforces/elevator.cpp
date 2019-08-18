#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,bill=0,x;
    cin>>n;
    ll arr[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>arr[i];
        x=(abs(i-1)+i-1)*2;
        bill+=arr[i]*x;
    }
    cout<<bill<<endl;
    return 0;
}