#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll x1,y1,x2,y2,n,i=0,day=0,dis,min,nx,ny,j,si,curdis,pdis,flag;
    string wind;
    cin>>x1>>y1;
    cin>>x2>>y2;
    cin>>si;
    cin>>wind;
    curdis=pow(abs(x2-x1),2)+pow(abs(y2-y1),2);
    pdis=curdis;
    while(x1!=x2 || y1!=y2)
    {
        if(i>=si)
            i=i%si;
        if(wind[i]=='U')
        {
            nx=x1,ny=y1;
            vector<pair<ll,ll>> vec;
            vec.push_back({x1,y1+1});
            vec.push_back({x1,y1+2});
            vec.push_back({x1+1,y1+1});
            vec.push_back({x1-1,y1+1});
            vec.push_back({x1,y1});
            min=INT16_MAX;
            for(j=0;j<vec.size();j++)
            {
                dis=pow(abs((x2-vec[j].first)),2)+pow(abs((y2-vec[j].second)),2);
                if(dis<min)
                {
                    min=dis;
                    nx=vec[j].first;ny=vec[j].second;
                }
            }
            x1=nx;y1=ny;day++;i++;vec.clear();
        }
        else if(wind[i]=='R')
        {
            nx=x1,ny=y1;
            vector<pair<ll,ll>> vec;
            vec.push_back({x1+1,y1});
            vec.push_back({x1+2,y1});
            vec.push_back({x1+1,y1+1});
            vec.push_back({x1+1,y1-1});
            vec.push_back({x1,y1});
            min=INT16_MAX;
            for(j=0;j<vec.size();j++)
            {
                dis=pow(abs((x2-vec[j].first)),2)+pow(abs((y2-vec[j].second)),2);
                if(dis<min)
                {
                    min=dis;
                    nx=vec[j].first;ny=vec[j].second;
                }
            }
            x1=nx;y1=ny;day++;i++;vec.clear();
        }
        else if(wind[i]=='L')
        {
            nx=x1,ny=y1;
            vector<pair<ll,ll>> vec;
            vec.push_back({x1-1,y1});
            vec.push_back({x1-2,y1});
            vec.push_back({x1-1,y1+1});
            vec.push_back({x1-1,y1-1});
            vec.push_back({x1,y1});
            min=INT16_MAX;
            for(j=0;j<vec.size();j++)
            {
                dis=pow(abs((x2-vec[j].first)),2)+pow(abs((y2-vec[j].second)),2);
                if(dis<min)
                {
                    min=dis;
                    nx=vec[j].first;ny=vec[j].second;
                }
            }
            x1=nx;y1=ny;day++;i++;vec.clear();
        }
        else if(wind[i]=='D')
        {
            nx=x1,ny=y1;
            vector<pair<ll,ll>> vec;
            vec.push_back({x1,y1-1});
            vec.push_back({x1,y1-2});
            vec.push_back({x1+1,y1-1});
            vec.push_back({x1-1,y1-1});
            vec.push_back({x1,y1});
            min=INT16_MAX;
            for(j=0;j<vec.size();j++)
            {
                dis=pow(abs((x2-vec[j].first)),2)+pow(abs((y2-vec[j].second)),2);
                if(dis<min)
                {
                    min=dis;
                    nx=vec[j].first;ny=vec[j].second;
                }
            }
            x1=nx;y1=ny;day++;i++;vec.clear();
        }
        pdis=curdis;
        curdis=min;
        if(curdis>=pdis)
        {
            cout<<"-1"<<endl;
            flag=1;
            break;
        }
    }
    if(flag!=1)
    cout<<day<<endl;
    return 0;
}