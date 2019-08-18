#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,i,ans;
    string str;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        cin>>str;
        for(i=0,ans=n;i<n;i++)
        {
            if(str[i]=='>')
                ans=min(ans,i);
            else    ans=min(ans,n-i-1);
        }
        cout<<ans<<endl;
    }
    return 0;
}