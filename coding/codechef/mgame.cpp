#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,p,i,j,k,m;
    cin>>t;
    while(t--)
    {
        cin>>n>>p;
        ll arr[n]={0};
        for(i=1;i<=p;i++)
        {
            for(j=1;j<=p;j++)
            {
                for(k=1;k<=p;k++)
                {
                    m=(((n%i)%j)%k)%n;
                    arr[m]++;
                }
            }
        }
        //cout<<*max_element(arr,arr+n);
        for(i=n-1;i>=0;i++)
        {
            if(arr[i]>0)
            {
                cout<<arr[i]<<endl;
                break;
            }
        }
    }
    return 0;
}