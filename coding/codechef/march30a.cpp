#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>x;
        string str;
        cin>>str;
        map<ll,bool> mp;
        for(ll k=x-n;k<=x+n;k++)
        {
            mp.emplace(k,false);
        }
        mp[x]=true;
        ll count=1,j=x;
        for(ll i=0;i<n;i++)
        {
            if(str[i]=='L')
                j--;
            else    j++;
            if(mp[j]==false)
                count++;
            mp[j]=true;
        }
        cout<<count<<endl;
    }
    return 0;
}