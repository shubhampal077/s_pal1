#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool compare(string &s1,string &s2) 
{ 
    return s1.size() < s2.size(); 
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,i,len;
    cin>>n;
    int arr[n]={0};
    string str,req1,req2,req,ans="\0",substr1,substr2;
    vector<string> vec1,vec2;
    for(i=1;i<=(2*n-2);i++)
    {
        cin>>str;
        vec1.push_back(str);
        vec2.push_back(str);
    }
    sort(vec2.begin(),vec2.end(),compare);
    //for(i=0;i<vec2.size();i++)
	//cout<<vec2[i]<<" ";
    req1=vec2[2*n-3];
    req2=vec2[2*n-4];
    if(req1.substr(1,n-2)==req2.substr(0,n-2))
        req=req1+to_string(req2[n-3]);
    else if(req2.substr(1,n-2)==req1.substr(0,n-2))
        req=req2+to_string(req1[n-3]);

    //if((req1[0]==vec2[0][0] && req1[req1.size()-1]==vec2[1][0]) || (req1[0]==vec2[1][0] && req1[req1.size()-1]==vec2[0][0]))
    //    req=req1;
    //else
     //   req=req2;
    //req.erase(n-1,n-2);
    for(i=0;i<vec1.size();i++)
    {
        len=vec1[i].length();
        substr1=req.substr(0,len);
        substr2=req.substr(req.length()-len,len);
        if(vec1[i]==substr1 && vec1[i]!=substr2)
            ans+="P"; 
        else if(vec1[i]!=substr1 && vec1[i]==substr2)
            ans+="S";
        else if(vec1[i]==substr1 && vec1[i]==substr2)
        {
            if(arr[vec1[i].length()]==0)
                ans+="P";
            else    
                ans+="S";
            arr[vec1[i].length()]--;            
        }
    }
    cout<<ans<<endl;
    //cout<<req<<" "<<req1<<" "<<req2;
    return 0;
}