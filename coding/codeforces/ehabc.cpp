#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,rem,x,sum;
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<n+1<<endl;
    for(i=n-1,sum=0;i>=0;i--)
    {
        a[i]+=sum;
        rem=a[i]%n;
        if(rem<=i)
        {
            x=i-rem;
        }
        else if(rem>i)
        {
            x=n-(a[i]-i)%n;
        }
        a[i]+=x;
        sum+=x;
        cout<<"1 "<<i+1<<" "<<x<<endl;
    }
    cout<<"2 "<<n<<" "<<n<<endl;
    return 0;
}