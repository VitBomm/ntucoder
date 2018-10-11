#include <iostream>
#include <queue>
#include <vector>
#define MAX 100005
using namespace std;
int u,k,a,b;
vector<int> graph[MAX];
vector<bool> visited(MAX,false);
priority_queue<int,vector<int>,greater<int> > pq;
void BFS(int s)
{
    queue<int> q;
    pq.push(s);
    q.push(s);
    visited[s] = true;
    while(!q.empty())
    {
        int u = q.front();
        q.pop();
        for(int i = 0;i<graph[u].size();i++)
        {
            int v = graph[u][i];
            if(!visited[v])
            {
                visited[v] = true;
                pq.push(v);
                q.push(v);
            }
        }
    }
}
int main()
{
    cin>>u>>k;
    for(int i = 1; i <=u;i++)
    {
        cin>>a;
        for(int j = 0; j<a;j++)
        {
            cin>>b;
            graph[i].push_back(b);
        }
    }
    BFS(k);
    int temp;
    cout<<pq.size()<<endl;
    while(!pq.empty())
    {
        temp = pq.top();
        pq.pop();
        cout<<temp<<" ";
    }
    return 0;
}
