#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,x,index,cost;
    double i;
    cin>>t;
    while(t--)
    {
        cin>>x;
        i=(-1+sqrt(1+8*x))/2;
        index=floor(i);
        cost=min(index+x-index*(index+1)/2,index+1+(index+1)*(index+2)/2-x);
        cout<<cost<<endl;
    }
    return 0;
}