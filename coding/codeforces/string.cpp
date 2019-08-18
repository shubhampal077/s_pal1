#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n,k,i;
    char ch;
    string str1,str2;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        str1="\0";
        for(i=1,ch='a';i<=k;i++)
        {
            str1.push_back(ch);
            ch++;
        }
        str2=str1;
        i=0;
        while(str2.length()!=n)
        {
            i=i%(str1.length());
            str2.push_back(str1[i]);
            i++;
        }
        cout<<str2<<endl;
    }
    return 0;
}