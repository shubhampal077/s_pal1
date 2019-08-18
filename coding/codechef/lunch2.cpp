#include<bits/stdc++.h>
//***************Constraints are always imaginary,the code is real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,i,j,n,yb,mb,db,yc,mc,dc,sum,term1,leap,term2,term3,term4;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll arr[n];
        for(i=0,sum=0;i<n;i++){
            cin>>arr[i];
            sum+=arr[i];
            }
        cin>>yb>>mb>>db;
        cin>>yc>>mc>>dc;
        //term 1
        term1=arr[mb-1]-db+1;
        for(i=mb;i<n;i++)
            term1+=arr[i];
        if(yb%4==0)
            term1+=1;
        //term 2
        leap=((yc-1)-((yc-1)%4)-(yb+4-(yb%4)))/4 + 1;
        term2=leap*(sum+1);
        //term 3
        term3=(yc-yb-1-leap)*sum;
        //term 4
        for(i=0,term4=0;i<mc-1;i++)
        {
            term4+=arr[i];
        }
        term4+=dc;
        cout<<term1+term2+term3+term4<<endl;
    }
    return 0;
}