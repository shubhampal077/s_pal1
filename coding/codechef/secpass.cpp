#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,k,pos;
    string s;
    cin>>t;
    while(t--)
    {
        cin>>n>>s;
        vector<ll> vec;
        for(int i=0;i<n;i++)
        {
            if(s[i]==s[0])
                vec.push_back(i);
        }
        k=1;
        while(k<n && s[k]!=s[0])
            k++;
        ll ans=1;
        while(ans<=k-1)
        {
            for(auto pos:vec)
            {
                if(pos+ans>=n)goto there;
                if(s[pos+ans]!=s[ans])goto there;
            }
            ans++;
        }
        there:
            cout<<s.substr(0,ans)<<endl;
        
    }
    return 0;
}