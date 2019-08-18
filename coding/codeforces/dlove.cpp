#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,i,j,temp,ans=1;
    cin>>n;
    temp=n;
    for(i=2;i<=(n);i++)
    {
        if(temp%i==0)
        {
            ans*=i;
            while(temp%i==0)
            {
                if(temp==0)
                    break;
                temp/=i;
            }
        }
        if(temp==0)
            break;
    }
    cout<<ans;
    return 0;
}