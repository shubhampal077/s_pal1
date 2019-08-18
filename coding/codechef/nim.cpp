#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,m,i,alice,bob;
    vector<int> a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=1,alice=0;i<=n;i++)
        {
            cin>>a[i];
            alice+=a[i];
        }
        for(i=1,bob=0;i<=m;i++)
        {
            cin>>b[i];
            bob+=b[i];
        }
        if(alice!=bob)
            cout<<"Alice"<<endl;
        else
        {
            if(a==b)
                cout<<"Bob\n";
            else
                cout<<"Alice\n";
        }
    }
    return 0;
}