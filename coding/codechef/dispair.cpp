#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,i,j,sum,count;
    cin>>n>>m;
    ll A[n],B[m];
    //vector<pair<ll,ll>> vec1;
    //vector<pair<ll,ll>> vec2;
    unordered_set<ll> set1;
    for(i=0;i<n;i++)
    {
        cin>>A[i];
        //vec1.push_back(make_pair(A[i],i));
    }
    for(i=0;i<m;i++)
    {
        cin>>B[i];
        //vec2.push_back(make_pair(B[i],i));
    }
    /*sort(vec1.begin(),vec1.end());
    sort(vec2.begin(),vec2.end());
    count=0;
    if(n>=m)
    {
        for(i=0;i+m<=n && count<n+m-1;i++)
        {
            for(j=0;j<m;j++)
            {
                sum=vec1[i+j].first+vec2[j].first;
                if(set1.find(sum)==set1.end())
                {
                    set1.insert(sum);count++;
                    cout<<vec1[i+j].second<<" "<<vec2[j].second<<endl;
                }
            }
        }
    }
    else{
        for(i=0;i+n<=m && count<n+m-1;i++)
        {
            for(j=0;j<n;j++)
            {
                sum=vec2[i+j].first+vec1[j].first;
                if(set1.find(sum)==set1.end())
                {
                    set1.insert(sum);count++;
                    cout<<vec2[i+j].second<<" "<<vec1[j].second<<endl;
                }
            }
        }
    }*/
    count=0;
    for(i=0;i<n && count<n+m-1;i++)
    {
        for(j=0;j<m && count<n+m-1;j++)
        {
            sum=A[i]+B[j];
            if(set1.find(sum)==set1.end())
            {
                set1.insert(sum);
                count++;
                cout<<i<<" "<<j<<endl;
            }
        }
    }
    cout<<count;
    return 0;
}