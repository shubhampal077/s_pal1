#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,p,x,ans,max;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n>>p;
        max=(n%(n/2+1));
        if(max==0)
        {
            cout<<p*p*p<<endl;
        }
        else{
            x=p-max;
            ans=x*x+(p-n)*(x+p-n);
            cout<<ans<<endl;
        }
    }
    return 0;
}