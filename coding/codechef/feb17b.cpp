#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,a,count;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll arr[n];
        count=0;
        for(i=0;i<n;i++)
            cin>>arr[i];
        sort(arr,arr+n);
        for(i=0;i<n;i++)
        {
            if(count>=arr[i])
                count++;
            else 
                break;
        }
        cout<<count<<endl;
    }
    return 0;
}