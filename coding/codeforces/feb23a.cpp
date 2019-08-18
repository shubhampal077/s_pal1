#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll w1,h1,w2,h2;
    cin>>w1>>h1>>w2>>h2;
    cout<<2*(h1+h2+2)+w1+w2+abs(w1-w2);
    return 0;
}