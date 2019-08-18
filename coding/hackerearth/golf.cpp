#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,a,b,c,k;
    cin>>t;
    while(t--)
    {
        cin>>k>>a>>b>>c;
        if((-a-b-c)==k || (-a-b+c)==k || (-a+b-c)==k || (-a+b+c)==k || (a-b-c)==k || (a-b+c)==k || (a+b-c)==k || (a+b+c)==k)
        {
            cout<<"WIN"<<endl;
        }
        else 
        {
            cout<<"LOSE"<<endl;
        }
    }
    return 0;
}