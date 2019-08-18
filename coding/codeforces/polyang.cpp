#include<bits/stdc++.h>
//***************Constraints are always imaginary,the code is real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,i,j,n,ang,x,flag;
    cin>>t;
    while(t--)
    {
        cin>>ang;
        for(n=3,flag=0;n<=998244353;n++)
        {
            x=360/(2*n);
            if(ang % x==0)
            {
                cout<<n<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"-1\n";
    }
    return 0;
}