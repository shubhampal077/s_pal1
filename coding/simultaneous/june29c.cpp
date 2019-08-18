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
        int n,q;
        cin>>n>>q;
        //VI A(n+1);
        VI Q(q+2),R(;
        unordered_map<int,int> zero;
        //for(int i=1;i<=n;i++)
           // A[i]=i;
        Q[1]=0;
        int type,y,x,p,q1,l,r,s;
        for(int i=1;i<=q;i++)
        {
            cin>>type;
            if(type==1)
            {
                cin>>y;
                x=y+Q[i];
                zero.insert({x,i});
                //A[x]=0;
                Q[i+1]=Q[i];
            }
            else
            {
                cin>>p>>q1;
                l=p+Q[i];
                r=q1+Q[i];
               bool flag=false;
               int w=0;
                //int s=*max_element(A.begin()+l,A.begin()+r+1);
                for(int i=r;w<zero.size()+1 && i>=l;i--,w++)
                {
                    if(zero.find(i)==zero.end())
                    {
                        s=i;
                        flag=true;
                        break;
                    }
                }
                if(flag==false)
                    s=0;
                /*
                if(zero.find(r)==zero.end())
                {
                    s=r;
                    flag=true;
                }    
                else
                {
                    
                    auto it=zero.end();
                    it--;
                    int prev=*it;
                    for(int i=0;i<zero.size()-1;i++)
                    {
                        it--;
                        if((prev-*it)>1)
                        {
                            s=*it;
                            flag=true;
                            break;
                        }
                        prev=*it;
                    }

                }
                if(flag==false)
                    s=0;*/
                cout<<s<<" "<<endl;
                Q[i+1]=(Q[i]+s)%n;
            }
        }
    }
    return 0;
}