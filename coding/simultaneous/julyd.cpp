#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
#define int long long 
#define MP make_pair
#define PB push_back
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define fi first
#define se second
typedef pair<int,int> PII;
typedef vector<int> VI;
typedef vector<PII> VPII;
typedef vector<VI> VVI;
typedef map<int,int> MPII;
typedef set<int> SETI;
typedef multiset<int> MSETI;
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    string s;
    cin>>s;
    int l=0;
    for(auto x:s)
    {
        if(x=='o')
            l++;
    }
    int pre[l],suf[l];
    int vcount=0;
    //pre[0]=0;suf[l]=0;
    int oc=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='v')
        {
            vcount++;
        }
        else
        {
        	oc++;
        	if(oc==1)
        	{
        		if(vcount==0)
        			pre[oc-1]=vcount;
        		else
        			pre[oc-1]=vcount-1;
        	}
        	else
        	{
        		if(vcount==0)
        			pre[oc-1]=pre[oc-2]+vcount;
        		else
        			pre[oc-1]=pre[oc-2]+vcount-1;
        	}
        	vcount=0;
        	/*if(i==0)
        	{
        		pre[i]=vcount-1;
        	}
            else
            {
            	pre[i]=pre[i-1]+(vcount-1);
            	vcount=0;
            }*/
        }
    }
    vcount=0;
    oc=l;
    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]=='v')
            vcount++;
        else
        {
        	oc--;
        	if(oc==l-1)
        	{
        		if(vcount==0)
        			suf[oc]=vcount;
    			else
    				suf[oc]=vcount-1;
        	}
        		
            else
            {
            	if(vcount==0)
            		suf[oc]=suf[oc+1]+vcount;
        		else
        			suf[oc]=suf[oc+1]+vcount-1;
            	
            }
            vcount=0;
        }
    }
    int ans=0;
    for(int i=0;i<l;i++)
    {
        ans+=(pre[i]*suf[i]);
    }/*
    for(int i=0;i<l;i++)
    {
    	cout<<pre[i]<<" ";
    	
    }
    cout<<endl;
    for(int i=0;i<l;i++)
    {
    	cout<<suf[i]<<" ";
    	
    }
    cout<<endl;*/
    cout<<ans;
    return 0;
}