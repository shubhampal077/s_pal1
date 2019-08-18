#include<bits/stdc++.h>
//***************Constraints are always imaginary,the code is real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,t=0;
    cin>>n;
    string enc,dec;
    cin>>enc;
    //dec.push_back(enc[0]);
    for(i=0;t<n;i++)
    {
    	  t=i*(i+1)/2;
        dec.push_back(enc[t]);
        
    }
    cout<<dec;
    return 0;
}