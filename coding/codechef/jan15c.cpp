#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll h,w,x,y,alp,c1,c2,k;
    cin>>h>>w>>x>>y;
    alp=__gcd(x,y);
    x/=alp;
    y/=alp;
    c1=h/x;
    c2=w/y;
    k=min(c1,c2);
    cout<<x*k<<" "<<y*k;
    return 0;
}