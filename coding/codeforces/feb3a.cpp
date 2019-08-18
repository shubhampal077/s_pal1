#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str,str2;
    ll v1=0,c1=0,v2=0,c2=0;
    cin>>str>>str2;
    for(ll i=0;i<str.length();i++)
    {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
            v1++;
        }
        else
            v2++;
    }
    for(ll i=0;i<str2.length();i++)
    {
        if(str2[i]=='a' || str2[i]=='e' || str2[i]=='i' || str2[i]=='o' || str2[i]=='u')
        {
            v2++;
        }
        else
            c2++;
    }
    if(v1==v2 && c1==c2)
        cout<<"Yes\n";
    else    cout<<"No\n";
    return 0;
}