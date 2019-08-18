#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,i,j,alp;
    cin>>n>>k;
    ll arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    
    sort(arr,arr+n);
    for(i=0;i<n;i++)
    {
        if(arr[i]!=0)
            break;
    }
    cout<<arr[i]<<endl;
    k--;
    while(k--)
    {
        /*while(arr[i]==0 && i<n)
            i++;
        if(i==n)
        {
            cout<<"0"<<endl;
            continue;
        }
        cout<<arr[i]<<endl;
        for(j=i;j<n;j++)
            arr[j]-=arr[i];*/
        if(i==n-1){
            cout<<"0"<<endl;
            continue;
            }
        alp=arr[i+1]-arr[i];
        while(alp==0)
        {
            i++;
        }
            cout<<alp<<endl;
        i++;
    }
    return 0;
}