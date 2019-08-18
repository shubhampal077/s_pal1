#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,L,R,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll arr[n+1];
        L=0,R=0;
        for(i=1;i<=n;i++)
        {
            cin>>arr[i];
            R+=arr[i];
        }
        L=arr[1];
        R-=arr[1];
        ll j=1;
        ans=INT_MAX;
        ll flag=0;
        while(j<=n-1)
        {
            if(R>=L)
            {
                ans=min(ans,R-L);
                flag=1;
            }
            j++;
            R-=arr[j];
            L+=arr[j];
        }
        if(flag==0)
            cout<<"-1\n";
        else
            cout<<ans<<endl;
    }
    
    return 0;
}