#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,k,i,coins,product;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        coins=n;
        product=1;
        for(i=1;i<=30;i++)
	  {
	      product*=k;
	      if(coins>=(k*(product-2)+product)/(k-1) && coins<(2*k*(product-1))/(k-1))
	      {
	          cout<<"Alice\n";
	          break;
	      }
	      else if(coins>=2*(product-k)/(k-1) && coins<(product+k*(product-2))/(k-1))
	      {
	          cout<<"Bob\n";
	          break;
	      }
	  }
    }
    return 0;
}
