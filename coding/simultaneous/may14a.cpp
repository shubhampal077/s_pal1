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
    int n,x,y;
    cin>>n>>x>>y;
    string no;
    cin>>no;
    //string str=to_string(no);
    //int ans=pow(10,y);
    //int div=pow(10,x);
    string get=no.substr(n-x,x);
    //string str=to_string(get);
    //string str1=to_string(ans);
    int i,j,count=0;
   // cout<<str<<" "<<str1<<" "<<get<<endl;
    /*for(i=str1.length()-1,j=str.length()-1;i>=0,j>=0;i--,j--)
    {
        if(str1[i]!=str[j])
            count++;
    }
    if(j>0)
    {
        while(j>=0)
        {
            if(str[j]=='1')
                count++;
            j--;
        }
    }*/
    for(i=get.length()-1;y>0;i--,y--)
    {
        if(get[i]=='1')
            count++;
        
    }
    if(get[i]=='0')
    {
        count++;
        i--;
    }
    if(i>=0)
    {
        while(i>=0)
        {
            if(get[i]=='1')
                count++;
            i--;
        }
    }
    cout<<count;

    return 0;
}