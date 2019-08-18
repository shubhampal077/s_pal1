#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
ll pow_mod(ll x,ll y,ll m)
{
    if(y==0)
        return 1;
    else if(y%2==0)
    {
        ll n=pow_mod(x,y/2,m);
        return (n*n)%m;
    }
    else{
        return (x%m*pow_mod(x,y-1,m))%m;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    cout<<"enter x,y,m : \n";
    ll x,y,m;
    cin>>x>>y>>m;
    cout<<pow_mod(x,y,m);
    return 0;
}