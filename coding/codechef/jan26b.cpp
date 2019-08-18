#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,k,i,j,rook,n,a,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        ll row[n+1]={0},col[n+1]={0};
        vector<ll> vec;
        while(k--)
        {
            cin>>a>>b;
            row[a]=1;
            col[b]=1;
        }
        //i=0;j=0;
        rook=0;
        for(i=0,j=0;i<=n && j<=n;)
        {
            while(row[i]!=0 && i<=n)
                i++;
            while(col[j]!=0 && j<=n)
                j++;
            if(row[i]==0 && col[j]==0)
            {
                row[i]=1;
                col[j]=1;
                rook++;
                vec.push_back(i);
                vec.push_back(j);
            }
        }
        cout<<rook<<" ";
        for(i=0;i<vec.size();i++)
            cout<<vec[i]<<" ";
        cout<<endl;
    }
    return 0;
}