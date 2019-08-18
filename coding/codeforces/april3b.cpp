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
    ll mat[n+1][2];
    vector<ll> arr[n+1];
    for(ll i=1;i<=n;i++)
    {
        cin>>mat[i][0]>>mat[i][1];
        if(mat[i][0]!=-1)
            arr[mat[i][0]].push_back(i);
    }
    ll flag2=0;
    for(ll i=1;i<=n;i++)
    {
        if(mat[i][1]==1)
        {
            ll flag=0;
            for(auto&x:arr[i])
            {
                if(mat[x][1]==0)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                cout<<i<<" ";
                flag2=1;}
        }
    }
    if(flag2==0)
        cout<<"-1";
    return 0;
}