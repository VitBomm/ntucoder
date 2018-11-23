#include <iostream>
#include <string>
#include <math.h>
#include <map>
using namespace std;
void solved()
{
    map<char,bool> temp;
   string s;
   getline(cin,s);
   int countt = 0;
   for(int i =0; i<s.length();i++)
   {
        if(temp[s[i]]== false)
        {
            countt++;
            temp[s[i]] = true;
        }
   }
   cout<<countt;
}
int main()
{
    solved();
    return 0;
}
