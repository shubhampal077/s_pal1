#include<bits/stdc++.h>
#define size 200005
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,j;
    cin>>n;
    ll arr[n];
    ll hash[size]={0};
    for(i=0;i<n;i++)
        cin>>arr[i];
    //sort(arr,arr+n);
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            hash[arr[i]+arr[j]]++;
        }
    }
    cout<<*max_element(hash,hash+size);
    return 0;
}