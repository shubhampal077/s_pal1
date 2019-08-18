#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool check(string str)
{
    int i=0,j=str.length()-1;
    while(i<j)
    {
        if(str[i]!=str[j])
        {
            return false;
        }
        i++;j--;
    }
    return true;
}
int main()
{
    int t,mid,i;
    char temp;
    bool flag,flag2;
    string str;
    cin>>t;
    while(t--)
    {
        flag2=false;
        cin>>str;
        flag=check(str);
        if(flag==true)
        {
            mid=str.length()/2;
            i=mid-1;
            while(i>=0)
            {
                if(str[i]!=str[mid])
                {
                    temp=str[i];
                    str[i]=str[mid];
                    str[mid]=temp;
                    flag2=true;
                    break;
                }
                i--;
            }
            if(flag2==true)
                cout<<str<<endl;
            else if(flag2==false)
                cout<<"-1"<<endl;
        }
        else if(flag==false)
        {
            cout<<str<<endl;
        }
    }
    return 0;
}