#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    unsigned long long n,i;
    cin>>n;
    unsigned long long b[n/2+1],a[n+1];
    for(i=1;i<=n/2;i++)
        cin>>b[i];
    a[1]=0;a[n]=b[1];
    for(i=2;i<=n/2;i++)
    {
        //cin>>b[i];
        /*a[i]=a[i-1];
        a[n-i+1]=b[i]-a[i];
        while(a[i]<a[i-1] || a[n-i+1]>a[n-i+2])
        {
            a[i]++;
            a[n-i+1]--;
        }*/
        if(b[i]>b[i-1])
        {
            a[i]=a[i-1]+b[i]-b[i-1];
            a[n-i+1]=b[i-1];
        }
        else{
            a[i]=a[i-1];
            a[n-i+1]=b[i];
        }
    }
    for(i=1;i<=n;i++)
        cout<<a[i]<<" ";
    return 0;
}