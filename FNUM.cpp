#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;
string s;
void solved()
{
    cin>>s;
    long long int temp =0;
    for(int i = 0; i <s.size();i++)
    {
        temp += s[i] - '0';
    }
    while(temp >=10)
    {
        long long int temp2 = temp;
        long long int rs = 0;
        while(temp2 !=0)
        {
            rs += temp2%10;
            temp2 /= 10;
        }
        temp = rs;
    }
    cout<<temp;
}
int main()
{
    ios_base::sync_with_stdio(false);
    solved();
    return 0;
}
