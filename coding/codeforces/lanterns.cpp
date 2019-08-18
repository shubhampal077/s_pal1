#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,l,i,j;
    long double maxi=-1,d1,d2;
    cin>>n>>l;
    ll arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    d1=max(arr[0],l-arr[n-1]);
    for(i=0;i<n-1;i++)
    {
        if((arr[i+1]-arr[i])>maxi)
            maxi=arr[i+1]-arr[i];
    }
    d2=max(d1,maxi/2);
    cout<<setprecision(10)<<d2<<endl;
    return 0;
}