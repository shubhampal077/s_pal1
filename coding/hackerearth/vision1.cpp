#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
#define matrix vector<vector<ll>>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,maxi,ini1,ini2,j,s,q,count;
    cin>>t;
    while(t--)
    {
        count=0;
        cin>>n;
        ll A[n+2][n+2],flag[n+2][n+2];
        for(i=0;i<n+2;i++)
        {
            for(j=0;j<n+2;j++)
                A[i][j]=0;
        }
        maxi=0;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                //flag[i][j]=1;
                cin>>A[i][j];
                if(A[i][j]>maxi)
                {
                    maxi=A[i][j];
                    ini1=i;
                    ini2=j;
                }
            }
            
        }

        //cout<<maxi<<" "<<ini1<<" "<<ini2<<endl;
        A[ini1][ini2]=0;
        count=1;
        
        while(1)
        {
            //army=false;
            ll max2=0;
            ll start1=ini1;
            ll start2=ini2;
            for(s=start1-1;s<=start1-1+2;s++)
            {
                for(q=start2-1;q<=start2-1+2;q++)
                {
                    if(s==start1 && q==start2)
                        continue;
                    if(A[s][q]>max2){
                        max2=A[s][q];
                        ini1=s;
                        ini2=q;
                    }
                        
                }
            }

            if(max2==0)
            {
                cout<<n*n-count<<endl;
                break;
                
            }
            else{
                A[ini1][ini2]=0;
                count++;
            }
        }
    }
    return 0;
}