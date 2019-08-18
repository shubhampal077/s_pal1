#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,count=0,j,i;
    cin>>n;
    ll arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    ll maxi = *max_element(arr,arr+n);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(arr[j]==maxi)
                count++;
            else    
                break;
        }
    }
    cout<<count<<endl;
    return 0;
}