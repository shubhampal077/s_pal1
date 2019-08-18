#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,x,y,i;
    float z;
    cin>>n>>x>>y;
    ll a[n];
    for(i=0,z=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]<=x)
            z++;
    }
    if(x>y)
        cout<<n<<endl;
    else{
        cout<<ceil(z/2)<<endl;
    }
    return 0;
}