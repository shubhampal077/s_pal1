#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
ll fact(ll n)
{
    if(n==1 || n==0)
        return 1;
    else
        return n*fact(n-1);
}
ll C(ll n,ll r)
{
    return fact(n)/(fact(r)*fact(n-r));
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,x,y,min,max;
    cin>>n>>m;
    if(n==m)
    {
        min=max=0;
    }
    else
    {
        max=C(n-m+1,2);
        //cout<<max<<" ";
        if(n%m==0)
        {
            min=C(n/m,2)*m;
        }
        else
        {
            x=(n-m)/(n/m);
            min=C(n/m+1,2)*x;
        }
    }
    cout<<min<<" "<<max;
    //cout<<C(2,2);
    return 0;
}