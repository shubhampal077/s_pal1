#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,k,v,sum,i,a,x;
    cin>>t;
    while(t--)
    {
        cin>>n>>k>>v;
        for(i=0,sum=0;i<n;i++)
        {
            cin>>a;
            sum+=a;
        }
        x=(n+k)*v-sum;
        if(x<=0 || x%k!=0)
            cout<<"-1"<<endl;
        else
        {
            cout<<x/k<<endl;
        }
    }
    return 0;
}