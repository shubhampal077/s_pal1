#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll A[n],ans[n]={0};
        for(ll i=0;i<n;i++)
        {
            cin>>A[i];
            ans[i%k]+=A[i];
        }
        for(ll i=k;i<n;i++)
        {
            ans[i]=ans[i-k]-A[i-k];
        }
        cout<<*max_element(ans,ans+n);
        
    }
    return 0;
}