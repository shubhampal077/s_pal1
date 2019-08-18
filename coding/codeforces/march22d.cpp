#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    ll k=n-2;
    cout<<k*(k+1)*(2*k+1)/6 + 3*k*(k+1)/2 + 2*k;
    return 0;
}