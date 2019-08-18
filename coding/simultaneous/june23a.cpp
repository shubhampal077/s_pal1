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
void find_sum(VI v,int sum)
{
    unordered_map<int,int> mp;
    int n=v.size(),curr_sum=0,cnt=0;
    for(int i=0;i<n;i++)
    {
         curr_sum+=v[i];
         if(curr_sum==sum)
        {
            cout<<"element found between 0 to "<<i<<endl;
            cnt++;
        }
        if(mp.find(curr_sum-sum)!=mp.end())
        {
            cout<<"found : "<<mp[curr_sum-sum]+1<<" "<<i<<endl;
            cnt++;
        }
        mp[curr_sum]=i;
        
    }
    cout<<"total sum subarrays : "<<cnt<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,sum;
    cin>>n>>sum;
    VI v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    find_sum(v,sum);
    return 0;
}