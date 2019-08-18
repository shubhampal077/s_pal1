#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,i,p,n;
    string s;
    cin>>t;
    while(t--)
    {
    	cin>>n;
        cin>>s;
        if(n==1 && s[0]=='0')
            cout<<1<<endl;
        else
        {
            for(i=0,p=0;i<s.length();i++)
        {
            if(i==0)
            {
                if(s[i]=='0' && s[i+1]=='0')
                {
                    p++;
                    s[i]='1';
                }
            }
            else if(i==s.length()-1)
                {
                    if(s[i]=='0' && s[i-1]=='0')
                    {
                        p++;
                        s[i]='1';
                    }
                }
            else
            {
                if(s[i]=='0' && s[i+1]=='0' && s[i-1]=='0')
                {
                    p++;
                    s[i]='1';
                }
            }
        }
        cout<<p<<endl;
        }
    }
    return 0;
}