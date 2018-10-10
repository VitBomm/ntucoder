#include <iostream>
#include <vector>
#include <queue>
#include <functional>
#include <algorithm>
#define MAX 10005
const int INF = 1e9;
using namespace std;
vector<vector<pair<long long int, long long int>>> graphWork, graphCar,graphN;
vector<long long int> distCar(MAX,INF);
vector<long long int> distWork(MAX,INF);
vector<long long int> distN(MAX,INF);
long long int path[MAX];
struct option
{
    bool operator()(const pair<long long int, long long int> &a, const pair<long long int,long long int> &b)
    {
        return a.second > b.second;
    }
};
void Dijtrans(long long int s,vector<long long int> &disttemp,vector<vector<pair<long long int, long long int>>> &graphtemp)
{
    priority_queue<pair<long long int,long long int>,vector<pair<long long int,long long int>>,option> pq;
    pq.push(make_pair(s, 0));
    disttemp[s] = 0;
    while(!pq.empty())
    {
        pair<long long int,long long int> top = pq.top();
        pq.pop();
        long long int u = top.first;
        long long int w = top.second;
        for(int i = 0 ; i < graphtemp[u].size();i++)
        {
            pair<long long int,long long int> neighbor = graphtemp[u][i];
            if(w+ neighbor.second < disttemp[neighbor.first])
            {
                disttemp[neighbor.first] = w + neighbor.second;
                pq.push(make_pair(neighbor.first, disttemp[neighbor.first]));
                path[neighbor.first] = u;
            }
        }
    }
}

int main()
{
    
    long long int n,m,k;
    long long int a,b,c,d;
        cin>>n>>m>>k;
        graphWork = vector<vector<pair<long long int,long long int>>>(MAX+5, vector<pair<long long int,long long int>>());
        graphCar = vector<vector<pair<long long int,long long int>>>(MAX+5, vector<pair<long long int,long long int>>());
        graphN = vector<vector<pair<long long int,long long int>>>(MAX+5, vector<pair<long long int,long long int>>());
        distN = vector<long long int>(n+1,INF);
        distWork = vector<long long int>(n+1,INF);
        distCar = vector<long long int>(n+1,INF);
        for(int i = 0 ; i <m;i++)
        {
            cin>>a>>b>>c>>d;
            graphWork[b].push_back(pair<long long int,long long  int>(a,d));
            graphN[b].push_back(pair<long long int,long long int>(a,c));
            graphCar[a].push_back(pair<long long int,long long int>(b,d));
        }
        Dijtrans(n, distWork,graphWork);
        Dijtrans(1, distCar, graphCar);
        Dijtrans(k,distN, graphN);
        long long int temp = INF;
        for(int i = 1 ; i <=n;i++)
        {
            if(distCar[i]+distN[i] < 60)
            {
                temp  = min(temp,distWork[i]+distCar[i]);
            }
        }
    cout<<temp;
    return 0;
}
