#include<bits/stdc++.h>
//***************Constraints are always imaginary,the code is real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,i,flag;
    string str;
    cin>>t;
    while(t--)
    {
        cin.ignore();
        getline(cin,str);
        i=0;flag=0;
        if(str=="not")
            cout<<"Real Fancy\n";
        else
        {
            while(i+3<=str.length())
            {
                if(i==0)
                {
                    if(str[i]=='n' && str[i+1]=='o'  && str[i+2]=='t' && str[i+3]==' ')
                    {
                        cout<<"Real Fancy\n";
                        flag=1;
                        break;
                    }
                }
                else if(i==str.length()-3)
                {
                    if(str[i-1]==' ' && str[i]=='n' && str[i+1]=='o' && str[i+2]=='t')
                    {
                        cout<<"Real Fancy\n";
                        flag=1;
                        break;
                    }
                }
                else
                {
                    if(str[i]=='n' && str[i+1]=='o'  && str[i+2]=='t' && str[i+3]==' ' && str[i-1]==' ')
                    {
                        cout<<"Real Fancy\n";
                        flag=1;
                        break;
                    }
                }
                i++;
            }
            if(flag==0)
            {
                cout<<"regularly fancy\n";
            }
        }
    }
    return 0;
}