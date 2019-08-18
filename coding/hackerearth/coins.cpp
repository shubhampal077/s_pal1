#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,C,M,R,k,c,P,i,j,q,temp,index,max;
    cin>>t;
    while(t--)
    {
        cin>>C>>M>>R>>k;
        ll arr[M+1]={0};
        while(R--)
        {
            cin>>P>>c;
            if(c>k)
            {
                q=(P+c-k)%M;
                temp=arr[q];
                arr[q]+=M;
                for(j=q+1,i=1;j<=M;j++,i++)
                    arr[j]+=(temp-i);
                for(j=q-1,i=1;j>=1;j--,i++)
                    arr[j]+=i;

            }
            else
            {
                q=P;
                temp=arr[q];
                arr[q]+=M;
                for(j=q+1,i=1;j<=M;j++,i++)
                    arr[j]+=(temp-i);
                for(j=q-1,i=1;j>=1;j--,i++)
                    arr[j]+=i;
            }
        }
        for(i=1,max=0,index=0;i<=M;i++)
        {
            if(arr[i]>max)
            {
                max=arr[i];
                index=i;
            }
        }
        cout<<index<<" "<<max<<endl;
    }
    return 0;
}