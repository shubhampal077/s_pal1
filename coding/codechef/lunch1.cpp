#include<bits/stdc++.h>
//***************Constraints are always imaginary,the code is real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,j,te,temp;
    cin>>te;
    while(te--)
    {
        cin>>n;
        ll mat[n][n];
        mat[0][0]=1;
        for(j=1,t=2;j<n;j++)
        {
            i=0;
            temp=j;
            while(i<=j)
            {
                mat[i][temp]=t;
                t++;
                i++;
                temp--;
            }
        }
        for(i=1;i<n;i++)
        {
            temp=n-1;
            while(i<=n-1)
            {
                mat[i][temp]=t;
                t++;
                i++;
                temp--;
            }

        }

        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}