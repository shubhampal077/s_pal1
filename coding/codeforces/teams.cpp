#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,prob=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n);
    for(i=0;i<=n-2;i=i+2)
    {
        prob+=(arr[i+1]-arr[i]);
    }
    cout<<prob<<endl;
    return 0;
}