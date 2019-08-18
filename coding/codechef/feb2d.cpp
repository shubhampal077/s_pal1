#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,alp,i,j;
    string str;
    cin>>t;
    while(t--)
    {
        alp=0;
        cin>>n;
        ll count[200]={0};
        for(i=1;i<=n;i++)
        {
            cin>>str;
            ll flag[200]={0};
            for(j=0;j<str.length();j++)
            {
                if(flag[str[j]]!=1)
                {
                    count[str[j]]++;
                    flag[str[j]]=1;
                }
            }
        }
        for(i=0;i<200;i++)
        {
            if(count[i]==n)
                alp++;
        }
        cout<<alp<<endl;
    }
    return 0;
}