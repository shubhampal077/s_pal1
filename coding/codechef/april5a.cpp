#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
ll solve(string str)
{
    ll curr=1,ans=0;
    for(ll i=0;i<str.length();i++)
    {
        if(str[i]=='S')
            ans+=curr;
        else    curr*=2;
    }
    return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,j,count,d,k,temp;
    string str;
    cin>>t;
    temp=t;
    while(t--)
    {
        cin>>d>>str;
        k=solve(str);
        if(k<=d)
            cout<<"Case #"<<temp-t<<":"<<" 0"<<endl;
        else
        {
            for(j=str.length()-1,count=0;j>=1;)
            {
                if(str[j]=='S' && str[j-1]=='C')
                {
                    swap(str[j],str[j-1]);
                    count++;
                    k=solve(str);
                    cout<<k<<" "<<str<<endl;
                    if(k<=d)
                        break;
                    else{   
                        j=str.length()-1;
                        continue;
                    }
                        
                }
                j--;
            }
            if(j<1 && k>d)
                cout<<"Case #"<<temp-t<<":"<<" IMPOSSIBLE"<<endl;
            else
                cout<<"Case #"<<temp-t<<":"<<" "<<count<<endl;
        }
        
    }
    return 0;
}