#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
#define pi 3.141592653589793238
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,r;
    double k,R,k1,k2;
    cin>>n>>r;
    k1=sin((pi/(double)(2*n))*(n-2));
    k2=sin(2*pi/(double)n);
    k=k1/k2;
    R=r/(2*k-1); 
    cout<<fixed<<setprecision(7)<<R;   
    return 0;
}