#include<bits/stdc++.h>
//***************Constraints are always imaginary,I'm real :)**************
using namespace std;
typedef long long int ll;
void bfs(vector<vector<int>> &mat,int start)
{
    vector<bool> visited(mat.size(),false);
    queue<int> q;
    cout<<start<<" ";
    visited[start]=true;
    q.push(start);
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(int v=1;v<=mat.size();v++)
        {
            if(mat[u][v]==1 && !visited[v])
            {
                cout<<v<<" ";
                visited[v]=true;
                q.push(v);
            }
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int v=4;
    vector<vector<int>> mat{
        {0,0,0,0,0},
        {0,0,1,0,1},
        {0,1,0,1,1},
        {0,0,1,0,1},
        {0,1,1,1,0}
    };
    int start=1;
    bfs(mat,start);
    return 0;
}
