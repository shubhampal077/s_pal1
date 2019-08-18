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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int A[n],B[n];
        VI even,odd;
        for(int i=0;i<n;i++){
            cin>>A[i];
            if(A[i]%2==0)
                even.push_back(A[i]);
            else
                odd.push_back(A[i]);
        }
        int j=0,k=0,res=0;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            if(a%2==0)
            {
                if(j<even.size())
                {
                    res+=(a+even[j])/2;
                    j++;
                }
                else
                {    
                    res+=(a+odd[k])/2;
                    k++;
                }

            }
            else
            {
                if(k<odd.size())
                {
                    res+=(a+odd[k])/2;
                    k++;
                }
                else
                {
                    res+=(a+even[j])/2;
                    j++;
                }
            }
        }
        cout<<res<<endl;
    }
    return 0;
}