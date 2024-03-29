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
    int n,m;
    cin>>n>>m;
    int arr[n],sum[n]={0};
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sum[0]=arr[0];
    for(int i=1;i<n;i++)
        sum[i]=sum[i-1]+arr[i];
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        v.push_back({arr[i],i});
    }
    sort(v.begin(),v.end());
    priority_queue<int,vector<int>> pq;
    VI ans;
    cout<<"0 ";
    pq.push(arr[0]);
    for(int i=1;i<n;i++)
    {
        int diff=sum[i]-m;
        int cnt=0;
        if(diff>0)
        {
            int j=0,sum2=0;
            while(j<ans.size() && sum2<diff)
            {
                sum2+=ans[j];
                j++;
                cnt++;
            }
            while(sum2<diff)
            {
                int a=pq.top();
                cnt++;
                sum2+=a;
                ans.PB(a);
            }
            pq.push(arr[i]);
        }
        cout<<cnt<<" ";
    }
    return 0;
}