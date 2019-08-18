#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,l;
    string s;
    cin>>t;
    while(t--)
    {
        
        cin>>s;
        cin>>l;
        ll arr[200]={0};
        for(ll i=0;i<l;i++)
            arr[s[i]]++;
        if(arr['c']==1 && arr['o']==1 && arr['d']==2 && arr['e']==2 && arr['r']==1)
            cout<<"yes"<<endl;
        else    cout<<"no"<<endl;
    }
    return 0;
}