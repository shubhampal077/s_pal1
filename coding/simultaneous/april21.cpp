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
        int n,a,b,x,y,z;
        cin>>n>>a>>b>>x>>y>>z;
        int con[n+1];
        MSETI s;
        for(int i=1;i<=n;i++){
            cin>>con[i];
            s.insert(con[i]);            
        }
        int p,h;
        if((z-a)/x < (z-b)/y)
            cout<<"0"<<endl;
        else
        {
            if((z-b)%y==0)
                h=(z-b)/y-1;
            else
                h=(z-b)/y;
            int rest=z-(a+h*x);
            int temp,count=0,flag=0;
            //for(auto it=s.begin();it!=s.end();it++)
            //	cout<<*it<<" ";
      	//cout<<endl;
      	//cout<<rest<<endl;
      	//auto it=s.end();
      	//cout<<*it<<endl;
      	
            while(rest>0)
            {
                auto it=s.rbegin();
                temp=*it;
                //cout<<temp<<" ";
                auto it2=s.end();
                it2--;
                s.erase(it2);
                s.insert(temp/2);
                //*it=(*it)/2;
                auto it1=s.rbegin();
                if(*it1==0 && rest>0)
                {
                    flag=1;
                    break;
                }
                count++;
                rest-=temp;

            }
            if(flag==1)
                cout<<"RIP\n";
            else
                cout<<count<<endl;
            
        }
    }
    return 0;
}