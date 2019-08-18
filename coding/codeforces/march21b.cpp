#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,ans,temp;
    cin>>n;
    ll arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    ans=arr[n-1];
    temp=arr[n-1];
    for(i=n-2;i>=0;i--)
    {
        if(arr[i]>=temp)
        {
            if(temp!=0)
                temp--;
            ans+=temp;
        }
        else
        {
            temp=arr[i];
            ans+=temp;
        }
    }
    cout<<ans;
    return 0;
}