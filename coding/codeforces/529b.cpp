#include<bits/stdc++.h>
//***************Constraints are always imaginary,the code is real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,maxi,mini;
    cin>>n;
    ll arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    //maxi=arr[0]-arr[n-1];
    cout<<min(arr[1]-arr[n-1],arr[0]-arr[n-2]);
    return 0;
}