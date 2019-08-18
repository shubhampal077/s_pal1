#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i=0,count=0,flag=1,len;
    string s;
    cin>>s;
    len=s.length();
    if(len<4)
        flag=0;
    if(flag!=0)
    {
        flag=0;
        while(i<len && s[i]!='[')
        {
            i++;
            count++;
        }
        if(s[i]=='[')
            flag=1;
        if(flag==1)
        {
            i++;flag=0;
            while(i<len && s[i]!=':')
            {
                i++;
                count++;
            }
            if(s[i]==':')
                flag=1;
            if(flag==1)
            {
                i++;flag=0;
                while(i<len && s[i]!=':')
                {
                    if(s[i]=='|')
                    {
                        i++;
                        continue;
                    }
                    else{
                        i++;
                        count++;
                    }
                }
                if(s[i]==':')
                    flag=1;
                if(flag==1)
                {
                    i++;
                    flag=0;
                    while(i<len && s[i]!=']')
                    {
                        i++;
                        count++;
                    }
                    if(s[i]==']')
                        flag=1;
                }
            }
            
        }
    }
    if(flag==1)
        cout<<len-count;
    else
        cout<<"-1";
    return 0;
}