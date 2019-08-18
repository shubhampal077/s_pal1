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
int compare(string s1,string s2)
{
	int k=0;
	for(int i=0;i<4;i++)
	{
		
		k+=(min(abs(s1[i]-s2[i]),26-abs(s1[i]-s2[i])));
	}
	return k;
}
//***************constraints are always imaginary, I'm real *******************************//
int32_t main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int n;
	cin>>n;
	string str;
	cin>>str;
	int l;
	int a=INT_MAX;
	for(int i=0;i<=n-4;i++)
	{
		l=compare(str.substr(i,4),"ACTG");
		a=min(a,l);
		//cout<<l<<" "<<str.substr(i,4)<<endl;

	}
	cout<<a;
	return 0;
}
