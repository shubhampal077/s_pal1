#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,temp,digit;
    cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
        cin>>n;
        temp=n;
        vector<ll> vec;
        while(n>0)
        {
            digit=n%10;
            vec.push_back(digit);
            n/=10;

        }
        reverse(vec.begin(),vec.end());
        ll k=vec.size();
        pair<ll,ll> arr[k];
        for(ll i=0;i<k;i++)
        {
            if(vec[i]==4)
            {
                arr[i].first=3;
                arr[i].second=1;
            }
            else
            {
                arr[i].first=vec[i];
                arr[i].second=0;
            }
        }
        ll A=0,B=0;
        for(ll i=0;i<k;i++)
        {
            A+=(arr[i].first*pow(10,k-i-1));
            B+=(arr[i].second*pow(10,k-i-1));
        }
        cout<<"Case #"<<tt<<": "<<A<<" "<<B<<endl;
    }
    return 0;
}