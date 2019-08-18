#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,i,d,q,sum,j;
    cin>>t;
    while(t--)
    {
        cin>>d;
        vector<pair<int,int>> vect1(d);
        for(i=0;i<d;i++)
        {
            cin>>vect1[i].first>>vect1[i].second;
        }
        cin>>q;
        vector<pair<int,int>> vect2(q);
        for(i=0;i<q;i++)
        {
            cin>>vect2[i].first>>vect2[i].second;
        }
        sort(vect1.begin(),vect1.end());
        for(i=0;i<q;i++)
        {
            j=0;sum=0;
            while(vect2[i].first>=vect1[j].first && j<d)
            {
                sum+=vect1[j].second;
                j++;
            }
            if(sum>=vect2[i].second)
                cout<<"Go Camp\n";
            else    cout<<"Go Sleep\n";
        }

    }
    return 0;
}