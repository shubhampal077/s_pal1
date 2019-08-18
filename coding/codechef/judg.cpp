#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,i,max,max1;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll A[n],B[n];
        for(i=0,max=0;i<n;i++){
            cin>>A[i];
            max+=A[i];
            }
        for(i=0,max1=0;i<n;i++){
            cin>>B[i];
            max1+=B[i];
        }
        sort(A,A+n);
        sort(B,B+n);
        max-=A[n-1];
        max1-=B[n-1];
        if(max>max1)
            cout<<"Bob\n";
        else if(max<max1)
            cout<<"Alice\n";
        else
            cout<<"Draw\n";
        
    }
    return 0;
}