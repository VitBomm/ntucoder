#include <iostream>
#include <map>
#include <string>
using namespace std;
void solved()
{
    map<string,int> mapp;
    int result = 0;
    int n;
    string s;
    cin>>n;
    for(int i =0; i<n;i++)
    {
        cin>>s;
        mapp[s]++;
    }
    map<string,int>::iterator it;
    for(it = mapp.begin(); it!= mapp.end();it++)
    {
        if(mapp[it->first] < 5)
        {
            result += 100;
        }
        else
        {
            result += (100 + mapp[it->first] - 5);
        }
    }
    cout<< result;
}
int main()
{
    solved();
    return 0;
}
