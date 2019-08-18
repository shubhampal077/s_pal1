#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
void find_sum(vector<int> v,int sum)
{
    int h=0,t=0,curr_sum=v[0],n=v.size(),cnt=0;
    while(h<n)
    {
        while(curr_sum<=sum)
        {
            if(curr_sum==sum)
            {
                cnt++;
                cout<<"sum between "<<t<<"and "<<h<<endl;
            }
            	h++;
            if(h<n)
                curr_sum+=v[h];
        }
        while(t<h && curr_sum>sum)
        {
            curr_sum-=v[t];
            t++;
        }
    }
    cout<<"total no of subarrays with given sum is : ";
}
int main()
{
    vector<int > v{5,3,7,4,10};
    int sum=11;
    find_sum(v,sum);
    return 0;
}
