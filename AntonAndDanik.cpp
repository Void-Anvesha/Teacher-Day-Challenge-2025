#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int Antcnt=0;
    int Dancnt=0;
    for(int i=0;i<n;i++)
    {
        char c=s[i];
    
        if(c=='A')Antcnt++;
        if(c=='D')Dancnt++;
    }

    if(Antcnt==Dancnt) cout<<"Friendship"<<endl;
    else if(Antcnt>Dancnt) cout<<"Anton"<<endl;
    else cout<<"Danik"<<endl;

    return 0;


}