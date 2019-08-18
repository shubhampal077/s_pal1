#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,max1,max2,max3;
    cin>>t;
    while(t--)
    {
        max1=max2=max3=-1;
        cin>>n;
        ll a[n],d[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
            cin>>d[i];
        for(i=1;i<=n-2;i++)
        {
            if(d[i]>(a[i-1]+a[i+1]))
            {
                if(d[i]>max1)
                    max1=d[i];
            }
        }
        if(d[0]>(a[1]+a[n-1]))
            max2=d[0];
        if(d[n-1]>(a[n-2]+a[0]))
        {
            max3=d[n-1];
        }
        cout<<max(max1,max(max2,max3))<<endl;
    }
    return 0;
}