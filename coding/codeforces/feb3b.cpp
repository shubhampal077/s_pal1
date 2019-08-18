#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,m,i;
    double maxi,sum=0;
    cin>>n>>k>>m;
    ll arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr,arr+n);
    //maxi=sum/n;
    i=0;
    do
    {
        i++;
        sum-=arr[i];
    }while(m-i-1<=(n-i-1)*k);
    maxi=(sum+m-i)/(n-i);
    cout<<maxi;
    return 0;
}