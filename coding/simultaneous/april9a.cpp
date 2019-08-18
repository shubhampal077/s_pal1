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
	int t; 
	cin>>t;
	while(t--)
	{
		int n,m,k,r,c;
		cin>>n>>m>>k;
		pair<int,bool> mat[n+2][m+2];
		PII arr[k];
		//memset(mat,-1,sizeof(mat));
		for(int i=0;i<n+2;i++)
		{
			for(int j=0;j<m+2;j++)
			{
				mat[i][j].fi=0;
				mat[i][j].se=false;
			}
		}
		for(int i=0;i<k;i++)
		{
			cin>>r>>c;
			mat[r][c].fi=1;
			arr[i].fi=r;arr[i].se=c;

		}  
		int count=0;
		for(int i=0;i<k;i++)
		{
			r=arr[i].fi;c=arr[i].se;
			if(mat[r][c-1].fi==0 && mat[r][c-1].se==false)
				count++;
			if(mat[r][c+1].fi==0 && mat[r][c+1].se==false)
				count++;
			if(mat[r+1][c].fi==0 && mat[r+1][c].se==false)
				count++;
			if(mat[r-1][c].fi==0 && mat[r-1][c].se==false)
				count++;
			mat[r][c].se=true;
		}
		cout<<count<<endl;
	}
	return 0;
}
