#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,a,temp;
    cin>>t;
    temp=t;
    while(t--)
    {
        vector<ll> even,odd,merge;
        cin>>n;
        for(ll i=0;i<n;i++)
        {
            cin>>a;
            if(i%2==0)
                even.push_back(a);
            else    odd.push_back(a);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());
        ll j=0,k=0;
        for(ll i=0;i<n;i++)
        {
            if(i%2==0)
            {
                merge.push_back(even[j++]);
            }
            else    merge.push_back(odd[k++]);
        }
        ll flag=0;
        ll i;
        for(i=0;i<n-1;i++)
        {
            if(merge[i+1]<merge[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
            cout<<"Case #"<<temp-t<<": "<<i<<endl;
        else
            cout<<"Case #"<<temp-t<<":"<<" OK"<<endl;
    }
    return 0;
}