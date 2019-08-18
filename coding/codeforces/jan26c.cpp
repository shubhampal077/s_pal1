#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
bool sortinrev(const pair<int,int> &a,  
               const pair<int,int> &b) 
{ 
       return (a.first > b.first); 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k,i,j,max;
    ll arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    string str;
    cin>>str;
    for(i=0,max=0;i<n;i++)
    {
        vector<pair<ll,char>> vec;
        vec.clear;
        vec.resize;
        while(i<n-1 && str[i]==str[i+1])
        {
            vec.push_back(make_pair(arr[i],str[i]));
            i++;
        }
        vec.push_back(make_pair(arr[i],str[i]));
        sort(vec.begin(),vec.end(),sortinrev);
        for(j=0;j<k && j<vec.size();j++)
        {
            max+=vec[j].first;
        }
    }
    cout<<max<<endl;
    return 0;
}