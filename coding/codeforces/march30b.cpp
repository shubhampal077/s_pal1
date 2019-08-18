#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
ll  update(vector<ll> vec)
{
    ll answer=1;
    for(ll i=0;i<vec.size();i++)
        answer*=vec[i];
    return answer;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,digit,ans=1,temp=1,t;
    vector<ll> vec;
    //int vec[11]={1};
    cin>>n;
    t=n;
    while(t>0)
    {
        digit=t%10;
        vec.push_back(digit);
        ans*=digit;
        t/=10;
    }
   // for(ll j=0;j<vec.size();j++)
      	//cout<<vec[j]<<" ";
	//cout<<endl;
    temp=ans;
    for(ll i=0;i<vec.size()-1;i++)
    {
        cout<<temp<<endl;
       // ans=ans/(vec[i]*vec[i+1]);
        vec[i]=9;
        if(vec[i+1]>1)
      	vec[i+1]--;
        //ans=ans*vec[i]*vec[i+1];
        //update(vec,i);
       // for(ll j=0;j<vec.size();j++)
      //	cout<<vec[j]<<" ";
	//cout<<endl;
        temp=max(temp,update(vec));
       // cout<<update(vec)<<" "<<temp<<endl;
    }
    ll flag=0,temp2=1;
    for(ll i=0;i<vec.size()-1;i++)
    {
        if(vec[i]!=9){
            flag=1;
            break;}
        temp2*=vec[i];
    }
    if(flag==0 && vec[n-1]==0)
        cout<<max(temp,temp2);
    else
        cout<<temp;
    return 0;
}