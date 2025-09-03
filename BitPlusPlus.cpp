#include<bits/stdc++.h>
using namespace std;

int main()
{
    //No of operations to perform
    int n;
    cin>>n;
   int x=0;
   while(n--)
   {
    string statement;
    cin>>statement;
    if(statement.find("++")!=string::npos) x++;
    else if(statement.find("--")!=string::npos) x--;

   }
   cout<<x<<endl;
   return 0;

}