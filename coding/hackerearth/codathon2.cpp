#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll q,t0,t1,t2,i,y;
    cin>>q;
    while(q--)
    {
        cin>>t0>>t1>>t2>>y;
        vector<ll> v;
        v.push_back(t0);
        v.push_back(t1);
        v.push_back(t2);
        for(i=3;i<y;i++)
        {
            v.push_back(v[i-1]+2*i+3*v[i-3]);
        }
        cout<<v[y-1]<<endl;
    }
    return 0;
}