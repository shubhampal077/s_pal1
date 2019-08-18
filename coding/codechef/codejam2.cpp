#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n;
    string str;
    cin>>t;
    for(ll tt=1;tt<=t;tt++)
    {
        cin>>n>>str;
        string ans;
        ll mat[n+2][n+2];
        for(ll i=0;i<=n+1;i++)
        {
            mat[0][i]=2;
            mat[n+1][i]=2;

        }
        for(ll i=1;i<=n;i++)
        {
            mat[i][0]=2;
            mat[i][n+1]=2;
        }
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++)
            {
                mat[i][j]=0;
            }
        }
        /*for(ll i=0;i<n+2;i++)
        {
            for(ll j=0;j<n+2;j++)
            {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }*/
        mat[1][1]=1;
        ll x=1,y=1;
        for(ll i=0;i<str.length();i++)
        {
            if(str[i]=='E')
            {
                y++;
                mat[x][y]=1;
            }
            else
            {
                x++;
                mat[x][y]=1;
            }
        }
        x=1;y=1;
        ll counts=0,counte=0;
        for(ll k=1;k<=2*n-2;k++)
        {
            if(mat[x][y]==1 && mat[x][y+1]==1)
            {
                ans.append("S");
                counts++;
                x++;
            }
            else if(mat[x][y]==1 && mat[x+1][y]==1)
            {
                ans.append("E");
                counte++;
                y++;
            }
            else if(mat[x][y]==0 && mat[x+1][y]==2)
            {
                ans.append("E");
                counte++;
                y++;
            }
            else if(mat[x][y]==0 && mat[x][y+1]==2)
            {
                ans.append("S");
                counts++;
                x++;
            }
            else if(mat[x][y]==0 && mat[x][y+1]!=2 && mat[x+1][y]!=2)
            {
                if(counts<=counte)
                {
                    ans.append("S");
                    counts++;
                    x++;
                }
                else
                {
                    ans.append("E");
                    counte++;
                    y++;
                }
            }
        }
        cout<<"Case #"<<tt<<": "<<ans<<endl;
    }
    return 0;
}