#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,A,a,x,d1,d2,i;
    double y;
    cin>>t;
    while(t--)
    {
        cin>>A;
        a=1;
        while(pow(2,a)<=(a*A+1))
        {
            
            a++;
        }
        d1=a-1;
        //d2=floor(log((double)A/log(2))*1.442695041);
        //y=A/(0.6931471806);
        //d2=log(y)/log(2);
        /*d2=floor(log(2*A)/log(2));
        if((ll)pow(2,d2)==A)
            d2--;
        cout<<d1<<" "<<d2<<endl;*/
        ll max=0;
        ll day=1;
        while(t<2*A)
        {

            i++;
        }
        d2=i;
        cout<<d1<<" "<<d2<<endl;
    }
    return 0;
}