#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,i,j,a,k;
    cin>>n>>m;
    ll arr[n+1]={0};
    for(i=1;i<=m;i++)
    {
        //flag=1;
        cin>>a;
        arr[a]++;
        for(j=1;j<=n;j++)
        {
            if(arr[j]==0)
            {
                //flag=1;
                break;
            }
        }
        if(j==n+1)
        {
            cout<<"1";
            for(k=1;k<=n;k++)
                arr[k]--;
        }
        else{
            cout<<"0";
        }
    }
    return 0;
}