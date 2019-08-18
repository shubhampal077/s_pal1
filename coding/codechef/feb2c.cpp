#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,a,b,k,lcm,x1,x2;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b>>k;
        lcm=(a*b)/(__gcd(a,b));
        x1=n/a-lcm;
        x2=n/b-lcm;
        if(x1+x2>=k)
            cout<<"Win\n";
        else    cout<<"Lose\n";
    }
    return 0;
}