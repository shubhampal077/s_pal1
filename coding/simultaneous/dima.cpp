#include<bits/stdc++.h>
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
//***************constraints are always imaginary, I'm real *******************************//
int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n,m,i,j,now,prev=-1,flag=0,flag2=0;
	cin>>n>>m;
	int ans[n+1]={1};
	if(n==1)
	{
		for(int i=1;i<=m;i++)
		{
			cin>>now;
			if(now!=0)
			{
				cout<<"TAK\n";
				cout<<i;
				flag2=1;
				break;
			}
		}
		if(flag2==0)
			cout<<"NIE\n";
	}
	else
	{
		for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			cin>>now;
			if(prev>0 && now!=prev)
			{
				flag=1;
				ans[i]=j;
				break;
			}
			prev=now;
		}
		if(flag==1)
				break;
	}
	if(flag==1)
	{
		cout<<"TAK\n";
		for(int k=1;k<=n;k++)
			cout<<ans[k]<<" ";
	}
	else
		cout<<"NIE\n";
	}
	return 0;
}
