#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x,i,a,b,flag=0;
    cin>>x;
    for(b=1;b<=x;b++)
    {
        for(i=1,a=b;a<=x;i++)
        {
            a=b*i;
            if(a*b>x && (a/b)<x)
            {
                flag=1;
                cout<<a<<" "<<b<<endl;
                break;
            }
        }
        if(flag==1)
            break;
    }
    if(flag==0)
        cout<<"-1"<<endl;
    return 0;
}