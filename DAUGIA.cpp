#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
bool dx(int n)
{
    int temp = 0,r;
    for(int i = n; i!=0; i/=10)
    {
        r = i%10;
        temp = temp*10 +r;
    }
    if(temp == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool snt(int n)
{
    if(n<2)
    {
        return false;
    }
    else
    {
        if(n%2==0)
        {
            return false;
        }
        else
        {
            for(int i = 3; i<= sqrt(float(n));i+=2)
            {
                if(n%i == 0)
                {
                    return false;
                }
            }
        }
    }
    return true;
}
void solved()
{
    int n1,n2;
    cin>>n1>>n2;
    int countt =0;
    for(int i = n1; i< n2;i++)
    {
        if(snt(i) && dx(i))
        {
            countt++;
        }
    }
    cout<<countt;
}
int main()
{
    ios_base::sync_with_stdio(false);
    solved();
    return 0;
}
