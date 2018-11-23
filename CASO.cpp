#include <iostream>
#include <map>
using namespace std;
map<long long int,long long int> mapp;
void solved()
{
    int n,e;
    cin>>n;
    for(int i = 0;i< n;i++)
    {
        cin>>e;
        mapp[e]++;
    }
    map<long long int,long long int>::iterator it;
    long long int result = 0;
    for(it = mapp.begin(); it!= mapp.end();it++)
    {
        long long int luu = mapp[it->first];
        if(luu >= 2)
        {
            luu--;
            result += (luu+1)*luu/2;
        }
    }
    cout<<result;
}
int main()
{
    solved();
    return 0;
}
    
