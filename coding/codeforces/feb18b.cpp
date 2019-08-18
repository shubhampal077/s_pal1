#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,k,i,fmax,smax;
    cin>>n>>m>>k;
    ll arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    fmax=arr[n-1];smax=arr[n-2];
    ll x=m/(k+1);
    ll y=m%(k+1);
    cout<<(fmax*k+smax)*x+fmax*y<<endl;
    return 0;
}