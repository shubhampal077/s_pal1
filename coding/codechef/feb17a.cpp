#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,w,h,p,area,n,b;
    cin>>t;
    while(t--)
    {
        cin>>n>>b;
        area=0;
        for(ll i=1;i<=n;i++){
            cin>>w>>h>>p;
            if(p<=b)
            {
                if((w*h)>area)
                    area=w*h;
            }
        }
        if(area==0)
            cout<<"no tablet"<<endl;
        else    
            cout<<area<<endl;
    }
    return 0;
}