#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string str;
    cin>>str;
    ll i=0,player=1;
    while(i<str.length()-1)
    {
        if(str[i]==str[i+1])
        {
            player++;
            str.erase(i,2);
            i=0;
        }
        else
            i++;
    }
    if(player%2==1)
        cout<<"NO";
    else    cout<<"YES";
    return 0;
}