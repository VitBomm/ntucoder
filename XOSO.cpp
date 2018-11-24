#include <iostream>
#include <vector>
using namespace std;
void solved()
{
    vector<long long int> v;
    long long int n,e;
    cin>>n;
    long long int chan = 0;
    long long int le = 0;
    for(int i = 0; i < n;i++)
    {
        cin>>e;
        v.push_back(e);
        if(e%2 ==0)
        {
            chan++;
        }
        else
        {
            le++;
        }
    }
    long long int result =0;
    bool check = true;
    if(le%2== 0)
    {
        check = false;
    }
    for(int i =0; i<n;i++)
    {
            if(check == true)
            {
                if(v[i]%2==0)
                {
                chan--;
                result+= le;
                }
            else
            {
                le--;
                result += chan;
            }
            }
        else
        {
         if(v[i]%2==0)
            {
                chan--;
                result += chan;
            }
            else
            {
                le--;
                result += le;
            }
        }
    }
    cout<<result;
}
int main()
{
    solved();
    return 0;
}
    
