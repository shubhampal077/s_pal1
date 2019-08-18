#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        if((float)b/2<a)
        {
            cout<<n/2*b+(n%2)*a<<endl;
        }
        else    cout<<n<<endl;
    }
    return 0;
}