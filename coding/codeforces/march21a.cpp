#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,count,i,sum=0;
    cin>>n;
    string str;
    cin>>str;
    for(i=0;i<n;i++)
    {
        if((str[i]-'0')%2==0)
            sum+=i+1;
    }
    cout<<sum;
    return 0;
}