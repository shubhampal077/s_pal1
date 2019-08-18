#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,l,r;
    cin>>t;
    while(t--)
    {
        cin>>l>>r;
        cout<<(r-l+1)*(r+l-1)<<endl;
    }
    return 0;
}