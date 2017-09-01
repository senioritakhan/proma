#include<bits/stdc++.h>
using namespace std;
vector < long long > v[1000];
long long visited[1000];
long long a,b,n,source;

void dfs(long long s)
{
    long long i;
    visited[s]=1;
    cout<<s<<" ";

    for ( i=0; i<v[s].size(); i++)
    {
        long long ve=v[s][i];
        if (visited[ve] == 0)
            dfs(ve);
    }

}

int main()
{
    long long i,e;
    memset(v,0,sizeof(v));
    memset(visited,0,sizeof(visited));
    cout<<"Number of node: ";
    cin>>n;
    cout<<"Number of edge: ";
    cin>>e;
    cout<<"Enter the edges"<<endl;
    for(i=0; i<e; i++)
    {
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    cout<<"Source: ";
    cin>>source;

    dfs(source);

    return 0;

}
ju
