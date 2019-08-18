#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,r,c,white=0,black=0;
    cin>>n>>r>>c;
    white=r+c-1-min(r,c);
    black=n+max(r,c)-r-c;
    if(white<=black)
        cout<<"White"<<endl;
    else
        cout<<"Black"<<endl;
    return 0;
}