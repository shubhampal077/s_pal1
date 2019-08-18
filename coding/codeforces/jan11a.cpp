#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,l,r,d;
    cin>>t;
    while(t--)
    {
        cin>>l>>r>>d;
        if(d<l)
            cout<<d<<endl;
        else if(d>=l & d<=r)
            cout<<(d*(r/d+1))<<endl;
        else if(d>r)
            cout<<d<<endl;
    }
    return 0;
}