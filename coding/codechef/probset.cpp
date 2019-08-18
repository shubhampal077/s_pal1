#include<bits/stdc++.h>
//***************Constraints are always imaginary,the code is real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,i,j,N,M,flag1,flag2;
    string str,test;
    cin>>t;
    while(t--)
    {
        flag1=3;flag2=3;
        cin>>N>>M;
        for(i=1;i<=N;i++)
        {
            cin>>str>>test;
            if(str=="correct")
            {
                for(j=0,flag1=0;j<M;j++)
                {
                    if(test[j]==0)
                    {
                        cout<<"INVALID\n";
                        flag1=1;
                        break;
                    }
                }
            }
            else if(str=="wrong")
            {
                for(j=0,flag2=1;j<M;j++)
                {
                    if(test[j]==0)
                    {
                        flag2=0;
                        break;
                    }
                }
            }
            if(flag1==1)
            {
                break;
            }
            if(flag2==1)
            {
                cout<<"WEAK\n";
                break;
            }
        }
        if(i==(N+1))
            cout<<"FINE\n";
    }
    return 0;
}