#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int>money(n);
    for(int i=0;i<n;i++)
    {
        cin>>money[i];
    }


    int cnt=0;
    int maxi=0;
    for(int i=0;i<n-1;i++)
    {
        if(money[i]<=money[i+1])
        {
            cnt++;
            maxi=max(maxi,cnt);
        }
        else cnt=0;
    }
    cout<<maxi+1<<endl;
    return 0;
}