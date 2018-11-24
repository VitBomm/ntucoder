#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
void solved()
{
    int n,e;
    int dem =0;
    cin>>n;
    cin>>e;
    v.push_back(e);
    cin>>e;
    v.push_back(e);
    int maxx = -1;
    bool temp = false;
    for(int i =2;i<n;i++)
    {
        cin>>e;
        v.push_back(e);
        if(v[i]== v[i-1]+v[i-2])
        {
            dem++;
            temp = true;
        }
        else
        {
            maxx = max(maxx,dem+2);
            dem = 0;
        }

    }
    if(temp == true)
    {
        maxx = max(maxx,dem+2);
        cout<<maxx;
        return;
    }
    cout<<-1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    solved();
    return 0;
}
    
