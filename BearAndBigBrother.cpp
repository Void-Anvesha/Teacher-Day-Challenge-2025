#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a,b;
    cin>>a>>b;
    //a:weight of Limak
    //b:weight of Bob

    int years=0;
    while(a<=b)
    {
        years++;
        a=a*3;
        b=b*2;
    }
      
    cout<<years<<endl;
    return 0;
}

