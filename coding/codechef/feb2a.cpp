#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,maxi,sum,i,a;
    cin>>t;
    while(t--)
    {
        maxi=-1;sum=0;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>a;
            sum+=a;
            if(a>maxi)
                maxi=a;
        }
        cout<<max(sum-n+1,maxi)<<endl;
    }
    return 0;
}