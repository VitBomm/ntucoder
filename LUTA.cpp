#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool option(pair<int,int> a,pair<int,int> b)
{
    return a.first < b.first;
}
vector<pair<int,int> > v;
int main()
{
    long long int n,c;
    int a,b;
    cin>>n>>c;
    for(int i = 0;i<n;i++ )
    {
        cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    long long int temp = c;
    int countt = 0;
    sort(v.begin(),v.end(),option);
    for(int i = 0 ; i<n;i++)
    {
        if(temp >= v[i].first)
        {
            temp+= v[i].second;
            countt++;
        }
        else
        {
            break;
        }
    }
    cout<<countt;
}
    
