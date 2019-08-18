#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i;
    string str;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>str;
        if(n==2)
        {
            if(str[0]>=str[1])
                cout<<"NO\n";
            else  {  
                cout<<'YES\n';
                cout<<"2"<<endl;
                cout<<str[0]<<" "<<str[1]<<endl;
                }
        }
        else
        {
            cout<<"YES\n";
            cout<<"2\n";
            cout<<str[0]<<" ";
            for(i=1;i<n;i++)
                cout<<str[i];
            cout<<endl;
        }
    }
    return 0;
}