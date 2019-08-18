#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n;
    cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
        string str,ans;
        cin>>n>>str;
        for(ll i=0;i<str.length();i++)
        {
            if(str[i]=='E')
                ans.append("S");
            else    ans.append("E");
        }
        cout<<"Case #"<<tt<<": "<<ans<<endl;
    }
    return 0;
}