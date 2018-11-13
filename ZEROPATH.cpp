#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <queue>
#include <map>
using namespace std;
map<int, bool> mark;
vector<int> result;
int temp;
void BFS(int n)
{
    mark[n] = true;
    for(int i = 2; i<= sqrt(n);i++)
        {
            if((n/i)*i == n)
                {
                    temp = (i-1)*(n/i+1);
                    if(!mark[temp])
                    {
                        mark[temp] = true;
                        result.push_back(temp);
                        BFS(temp);
                    }
                }
        }
}
void solved()
{
    mark[0] = true;
    result.push_back(0);
    int n;
    cin>>n;
    BFS(n);
    sort(result.begin(),result.end());
    cout<<result.size()<<endl;
    for(int i = 0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
    
}
int main()
{
    solved();
    return 0;
}
