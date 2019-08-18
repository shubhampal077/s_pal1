#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,count0=0,count1=0;
    cin>>n;
    ll a[n];
    for(ll i=0;i<n;i++)
        cin>>a[i];
    ll j=n-2;
    /*while(j>=0 && count0==0 || count1==0)
    {
        if(a[j+1]==0)
            count0++;
        else if(a[j+1]==1)
            count1++;
        j--;
    }*/
    for(;j>=0;j--)
    {
        if(a[j+1]==0)
            count0++;
        else
            count1++;
        if(count0!=0 && count1!=0)
            break;
        j--;
    }
    cout<<j;
    return 0;
}