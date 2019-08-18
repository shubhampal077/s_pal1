#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
bool palindrome(ll num)
{
    int n, digit, rev = 0;
    n = num;

     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);
return (n==rev);
}
bool isPerfectSquare(long double x) 
{   
  // Find floating point value of  
  // square root of x. 
  long double sr = sqrt(x); 
  
  // If square root is an integer 
  return ((sr - floor(sr)) == 0); 
} 
int power(int x, unsigned int y) 
{ 
    if (y == 0) 
        return 1; 
    if (y % 2 == 0) 
        return power(x, y / 2) * power(x, y / 2); 
    return x * power(x, y / 2) * power(x, y / 2); 
} 
  
/* Function to calculate order of the number */
int order(int x) 
{ 
    int n = 0; 
    while (x) { 
        n++; 
        x = x / 10; 
    } 
    return n; 
} 
  
// Function to check whether the given number is 
// Armstrong number or not 
bool isArmstrong(int x) 
{ 
    // Calling order function 
    int n = order(x); 
    int temp = x, sum = 0; 
    while (temp) { 
        int r = temp % 10; 
        sum += power(r, n); 
        temp = temp / 10; 
    } 
  
    // If satisfies Armstrong condition 
    if (sum == x) 
        return true; 
    else
        return false; 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,n,a,i,ans,res;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>a;
            ans=0;
            res=0;
            if(isArmstrong(a))
                res=1;
            ans=ans<<1;
            ans+res;
            res=0;
            if(palindrome(a))
                res=1;
             ans=ans<<1;
            ans+res;
            res=0;
            if(isPerfectSquare(a))
                res=1;
             ans=ans<<1;
            ans+res;
            switch(ans){
                case 0: 
                cout<<a;

                cout<<" ";
                break;
                case 1:
                cout<<"<b>"; 
                cout<<a;
                cout<<"</b>"; 
                cout<<" ";
                break;
                case 2:
                            cout<<"<u>";  
                cout<<a;
            cout<<"</u>"; 
                cout<<" ";
                break;
                case 3: 
                cout<<"<u>";
                cout<<"<b>";
                cout<<a;
                cout<<"</b>"; 
            cout<<"</u>"; 
                
                cout<<" ";
                break;
                case 4: 
                            cout<<"<a>"; 
                cout<<a;
            cout<<"<a>"; 
                cout<<" ";
                break;
                case 5: 
                cout<<"<a>";
                cout<<"<b>";
                cout<<a;
                cout<<"</b>"; 
            cout<<"</a>";
                cout<<" ";
                break;
                case 6: cout<<"<a>";
                cout<<"<u>";
                cout<<a;
                cout<<"</u>"; 
            cout<<"</a>";
                cout<<" ";
                break;
                case 7:  cout<<"<a>";
                cout<<"<u>";
                cout<<"<b>";
                cout<<a;
                cout<<"</b>";
                cout<<"</u>"; 
            cout<<"</a>";
                cout<<" ";
                break;
            }

        }
        cout<<endl;
    }
    return 0;
}