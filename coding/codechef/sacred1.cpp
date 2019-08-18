#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
bool sortbysec(const pair<string,ll> &a, const pair<string,ll> &b) 
{ 
    return (a.second < b.second); 
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,q,i,x,n1,n2;
    string s,temp;
    char l;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        vector<pair<string,ll>> arr[n+1];
        ll flag[n+1]={0};
        for(i=1;i<=3*n;i++)
        {
            cin>>x>>s>>l;
            if(l=='Y')
                arr[x].push_back(make_pair(s,1));
            else if(l=='N')
            {
                if(flag[x]==0)
                    arr[x].push_back(make_pair(s,2));
                else
                {
                    arr[x].push_back(make_pair(s,3));
                }
                flag[x]=1;

            }
        }
        for(i=1;i<=n;i++)
        {
            sort(arr[i].begin(),arr[i].end(),sortbysec);
        }
        for(i=1;i<=n;i++)
        {
            if(!lexicographical_compare(arr[i][1].first.begin(),arr[i][1].first.end(),arr[i][2].first.begin(),arr[i][2].first.end()))
            {
                swap(arr[i][1].first,arr[i][2].first);
                swap(arr[i][1].second,arr[i][2].second);
            }
        }
        for(i=1;i<=q;i++)
        {
            cin>>n1>>n2;
            cout<<arr[n1][n2-1].first<<endl;
        }
    }
    return 0;
}