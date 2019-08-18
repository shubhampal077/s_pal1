#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
void computeLPSArray(string pat, ll M, ll lps[]) 
    { 
        // length of the previous longest prefix suffix 
        ll len = 0; 
        ll i = 1; 
        lps[0] = 0;  // lps[0] is always 0 
   
        // the loop calculates lps[i] for i = 1 to M-1 
        while (i < M) 
        { 
            if (pat[i] == pat[len]) 
            { 
                len++; 
                lps[i] = len; 
                i++; 
            } 
            else  // (pat[i] != pat[len]) 
            { 
                // This is tricky. Consider the example. 
                // AAACAAAA and i = 7. The idea is similar  
                // to search step. 
                if (len != 0) 
                { 
                    len = lps[len-1]; 
   
                    // Also, note that we do not increment 
                    // i here 
                } 
                else  // if (len == 0) 
                { 
                    lps[i] = len; 
                    i++; 
                } 
            } 
        } 
    } 
ll kmp(string pat, string txt) 
    { 
        ll M = pat.length(); 
        ll N = txt.length(); 
   
        // create lps[] that will hold the longest 
        // prefix suffix values for pattern 
        ll lps[M]; 
        ll j = 0;  // index for pat[] 
   
        // Preprocess the pattern (calculate lps[] 
        // array) 
        computeLPSArray(pat,M,lps); 
   
        ll i = 0;  // index for txt[] 
        ll res = 0;  
        ll next_i = 0;   
          
        while (i < N) 
        { 
            if (pat[j] == txt[i]) 
            { 
                j++; 
                i++; 
            } 
            if (j == M) 
            { 
                // When we find pattern first time, 
                // we iterate again to check if there  
                // exists more pattern 
                j = lps[j-1]; 
                res++; 
  
                // We start i to check for more than once 
                // appearance of pattern, we will reset i  
                // to previous start+1 
                if (lps[j]!=0) 
                    i = ++next_i; 
                j = 0; 
            } 
   
            // mismatch after j matches 
            else if (i < N && pat[j] != txt[i]) 
            { 
                // Do not match lps[0..lps[j-1]] characters, 
                // they will match anyway 
                if (j != 0) 
                    j = lps[j-1]; 
                else
                    i = i+1; 
            } 
        } 
        return res; 
    }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t,i,n,x,low,high,y;
    cin>>t;
    while(t--)
    {
        cin>>n;
        string str,s1,s2;
        cin>>str;
        char first=str[0];
        x=0;
        for(i=0;i<n;i++)
        {
            if(str[i]==first)
                x++;
        }
        if(x==1)
            cout<<str<<endl;
        else
        {
            low=1;high=n/x;
            while(low<=high)
            {
                s1=str.substr(0,low);
                s2=str.substr(0,high);
                x=kmp(s1,str);
                y=kmp(s2,str);
                if(x==y)
                {
                    cout<<s2<<endl;
                    break;
                }
                else
                {
                    high=(low+high)/2;
                }
            }
        }

    }
    return 0;
}