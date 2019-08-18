#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll check(string str,ll n)
{
    ll i,j,max=0,count,x;
    for(i=0;i<n-1;i++)
    {
        x=1;
        count=1;
        for(j=i+1;count<(2*x+1) && j<n;j++,count++)
        {
            if(str[j]==str[i])
                x++;
        }
        if(count>max)
            max=count;
    }
    return max;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,l1,l2;
    string str1,str2;
    cin>>t;
    while(t--)
    {
        cin>>n>>str1;
        str2=str1;
        reverse(str2.begin(),str2.end());
        l1=check(str1,n);
        l2=check(str2,n);
        cout<<max(l1,l2)<<endl;
    }
    return 0;
}