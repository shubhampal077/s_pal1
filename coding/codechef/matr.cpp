#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MAX 2e9 + 1
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,m,i,j,flag;
    cin>>t;
    while(t--)
    {
        flag=0;
        cin>>n>>m;
        ll mat[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>mat[i][j];
            }
        }
        if(mat[0][0]==-1)
            mat[0][0]=1;
        for(i=0,j=0;j<m-1;j++)
            if(mat[i][j-1]==-1)
                mat[i][j+1]=mat[i][j];
        for(i=0,j=0;i<n-1;i++)
            if(mat[i+1][j]==-1)
                mat[i+1][j]=mat[i][j];
        for(i=1;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
                if(mat[i][j]==-1)
                {
                    mat[i][j]=max(mat[i-1][j],mat[i][j-1]);
                }
            }
        }
        //checking
        for(i=0,j=1;j<m;j++)
        {
            if(mat[i][j]<mat[i][j-1]){
                flag=1;
                break;
            }
        }
        for(i=1,j=0;i<n;i++)
        {
            if(mat[i][j]<mat[i-1][j])
            {
                flag=1;
                break;
            }
        }
        for(i=1;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
                if(mat[i][j]<mat[i-1][j] || mat[i][j]<mat[i][j-1] || mat[i][j]>2000000000)
                {
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
            cout<<"-1\n";
        else{
            for(i=0;i<n;i++)
            {
                for(j=0;j<m;j++)
                {
                    cout<<mat[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}