#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,l;
    cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
        cin>>n>>l;
        ll cip[l];
        for(ll i=0;i<l;i++)
            cin>>cip[i];
        set<ll> prime;
        ll k;
        for(ll i=0;i<l-1;i++)
        {
            if(cip[i]==cip[i+1]) 
            {
               continue;
            }
            else
            {
                k=__gcd(cip[i],cip[i+1]);
                prime.insert(k);
                prime.insert(cip[i]/k);
                prime.insert(cip[i+1]/k);
            }

        }
        set<ll>::iterator it=prime.begin();
        /*for(;it!=prime.end();it++)
        {
            cout<<*it<<" ";
        }*/
        map<ll,char> mp;
        char ch='A';
        for(auto it=prime.begin();it!=prime.end();it++)
        {
            mp.emplace(*it,ch);
           // cout<<*it<<" "<<ch<<endl;
            ch++;
        }
        ll first,temp,f;
        if(cip[0]==cip[1])
        {
            ll j=0;
            while(cip[j]==cip[j+1])
                j++;
            first=cip[j]/(__gcd(cip[j],cip[j+1]));
        }
        else
        {
            first=cip[0]/(__gcd(cip[0],cip[1]));
        }
        temp=first;
        cout<<"Case #"<<tt<<": "<<mp[first];
        for(ll i=0;i<l;i++)
        {
            f=cip[i]/temp;
            cout<<mp[f];
            temp=f;
        }
        cout<<endl;
    }
    return 0;
}