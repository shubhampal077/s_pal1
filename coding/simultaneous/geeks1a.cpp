#include<bits/stdc++.h>
using namespace std;
typedef long long int li;
li prod(li a,li b,li c)
{
    return (li)(pow(2,a)*pow(3,b)*pow(5,c));
}
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    li n;
	    cin>>n;
	    set<li> v;
	    map<li,pair<li,pair<li,li>>> mp;
	    li a=0,b=0,c=0;
        li ne=prod(a,b,c);
	    v.insert(ne);
	    while(v.size()<n)
	    {
	        
	        li t1=prod(a+1,b,c);
	        v.insert(t1);
	        mp[t1]={a+1,{b,c}};
	        li t2=prod(a,b+1,c);
	        v.insert(t2);
	        mp[t2]={a,{b+1,c}};
	        li t3=prod(a,b,c+1);
	        v.insert(t3);
	        mp[t3]={a,{b,c+1}};
	        li t0=min(t1,min(t2,t3));
	        
	        a=mp[t0].first;b=mp[t0].second.first;c=mp[t0].second.second;
	    }
        for(auto it=v.begin();it!=v.end();it++)
            cout<<*it<<" ";
            cout<<endl;
	    
	}
	return 0;
}