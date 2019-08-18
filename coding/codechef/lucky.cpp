#include<bits/stdc++.h>
//***************Constraints are always imaginary,the code is real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,i,no_lcm,no_a,no_b,a,b,n,lcm;
    cin>>t;
    while(t--)
    {
        cin>>n>>a>>b;
        ll arr[n];
        lcm=a*b/(__gcd(a,b));
        for(i=0,no_lcm=0,no_a=0,no_b=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%lcm==0)
            {
                no_lcm++;no_a++;no_b++;
            }
            else if(arr[i]%a==0)
                no_a++;
            else if(arr[i]%b==0)
                no_b++;
        }
        if(a%b==0 || b%a==0)
        {
            if(a<=b && no_a!=0)
                cout<<"BOB\n";
            else if(a<=b && no_a==0)
                cout<<"ALICE\n";
            else if(a>b)
            {
                if(no_a<no_b)
                    cout<<"ALICE\n";
                else if(no_a==no_b)
                    cout<<"BOB\n";
            }
        }
        else
        {
            if(no_lcm!=0)
            {
                if(no_a<no_b)
                    cout<<"ALICE\n";
                else if(no_a>=no_b)
                    cout<<"BOB\n";
            }
            else if(no_lcm==0)
            {
                if(no_a<=no_b)
                    cout<<"ALICE\n";
                else if(no_a>no_b)
                    cout<<"BOB\n";
            }
        }

    }
    return 0;
}