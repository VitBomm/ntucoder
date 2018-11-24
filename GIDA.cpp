#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v1,v2;
void solved()
{
    int n,e;
    cin>>n;
    for(int i = 0 ;i < n; i++)
    {
        cin>>e;
        v1.push_back(e);
    }
    for(int i = 0 ;i < n; i++)
    {
        cin>>e;
        v2.push_back(e);
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    int countv1 =0;
    int countv2 =0;
    int dem = 0;
    while(countv2 < n)
    {
        if(v1[countv1] < v2[countv2])
        {
            countv1++;
            countv2++;
            dem++;
        }
        else
        {
            countv2++;
        }
    }
    cout<<dem;
}
int main()
{
    solved();
    return 0;
}
    
