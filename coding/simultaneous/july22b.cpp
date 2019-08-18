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
    int n;
    cin>>n;
    int A[n];
    int max=-1,index=-1;
    for(int i=0;i<n;i++)
    {
        cin>>A[i];
        if(A[i]>max)
        {
            max=A[i];
            index=i;
        }
    }
    int i,j;
    i=j=index;
    stack<int> s;
    s.push(A[i]);
    int flag=0;
    while(i!=0 || j!=n-1)
    {
        if(i>0 && j<n-1)
        {
            int left=A[i-1];
            int right=A[j+1];
            if(s.top()<left && s.top()<right)
            {
                flag=1;
                break;
            }
            if(s.top()-right<0)
            {
                s.push(left);
                i--;
                continue;
            }
            if(s.top()-left<0)
            {
                s.push(right);
                j++;
                continue;
            }
            if((s.top()-left)<(s.top()-right))
            {
                s.push(A[i-1]);
                i--;
            }
            else
            {
                s.push(A[j+1]);
                j++;
            }

        }
        else if(i==0 && j<n-1)
        {
            int right=A[j+1];
            if(s.top()<right)
            {
                flag=1;
                break;
            }
            else
            {
                 s.push(A[j+1]);
                 j++;
            }
        }
        else if(j==n-1 && i>0)
        {
            int left=A[i-1];
            if(s.top()<left)
            {
                flag=1;
                break;
            }
            else
            {
                s.push(A[i-1]);
                i--;
            }
        }
    }
    if(flag==1)
        cout<<"NO\n";
    else
        cout<<"YES\n";
    return 0;
}