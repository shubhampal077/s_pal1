#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    if(n==1)
        cout<<"0\n";
    else if(n==2)
        cout<<"1\n";
    else{
        if(n%2==1)
        {
            if((n/2)%2==1)
                cout<<"0\n";
            else    cout<<"1\n";
        }
        else{
            if((n/2)%2==0)
                cout<<"0\n";
            else   
                 cout<<"1\n";
        }
    }
    return 0;
}