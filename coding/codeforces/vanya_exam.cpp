#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool sortbysec(pair<int,int> a,pair<int,int> b)
{
    return a.second<b.second;
}
int main()
{
    ll n,r,avg,i,sum,diff,essays=0;
    cin>>n>>r>>avg;
    vector<pair<int,int>> vect(n);
    //vect.resize(n);
    for(i=0,sum=0;i<n;i++)
    {
        cin>>vect[i].first>>vect[i].second;
        sum+=vect[i].first;
    }
    diff=(n*avg)-sum;
    if(diff<=0)
        essays=0;
    else
    {
        sort(vect.begin(),vect.end(),sortbysec);
        i=0;
        while(diff>0)
        {
            if((r-vect[i].first)<=diff)
            {
                essays+=vect[i].second*(r-vect[i].first);
                diff=diff-(r-vect[i].first);
            }
            else{
                essays+=vect[i].second*diff;
                diff=0;
            }
            i++;
        }
    }
    cout<<essays<<endl;
    return 0;
}