#include <iostream>
using namespace std;
void solved()
{
    int n,k;
    cin>>n>>k;
    if(n<=k)
    {
        cout<<10;
        return;
    }
    else
    {
        if(n*2%k == 0)
        {
            cout<<(n*2/k)*5;
        }
        else
        {
            cout<<(n*2/k)*5+5;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    solved();
    return 0;
}
    
