#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,c,i=1,j,verdict;
    cin>>n>>c;
    while(i<=n)
    {
        cout<<"1 "<<i<<endl;
        cin>>verdict;
        if(verdict==1){
            cout<<"2"<<endl;
            break;

        }
        else if(verdict==0)
            i+=500;
    }
    if(i==1)
        cout<<"3 1"<<endl;
    else
    {
        for(j=i-500+1;j<=i-1;j++)
        {
            cout<<"1 "<<j<<endl;
            cin>>verdict;
            if(verdict==1)
                break;
        }
        cout<<"3 "<<j<<endl;
    }
    return 0;
}