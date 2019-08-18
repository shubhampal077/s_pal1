#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define MOD 1000000007
int mod(string num, int a) 
{ 
    // Initialize result 
    int res = 0; 
  
    // One by one process all digits of 'num' 
    for (int i = 0; i < num.length(); i++) 
         res = (res*10 + (int)num[i] - '0') %a; 
  
    return res; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,out;
    string ori,ans;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ori=to_string(n);
        vector<string> vec;
        for(i=1;i<ori.length();i++)
        {
            vec.push_back(ori.substr(i)+ori.substr(0,i));
        }
        ans=ori;
        for(i=0;i<vec.size();i++)
        {
            ans+=vec[i];
        }
       // out=mod(ans);
        //out=((stoi(ans))%MOD);
        cout<<out<<endl;
    }
    return 0;
}