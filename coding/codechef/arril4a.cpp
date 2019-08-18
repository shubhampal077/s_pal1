#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,m,k;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        if((n%m)%k==0)
            cout<<(n%m)/k<<endl;
        else    cout<<"-1"<<endl;
    }
    return 0;
}