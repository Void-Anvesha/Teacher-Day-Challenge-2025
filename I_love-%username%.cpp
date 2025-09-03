#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    if(n<=1){
        cout<<0<<endl;
        return 0;
    }

    vector<int>points(n);
    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;
        points[i]=temp;

    }

    int amazingCnt=0;
    int minSoFar=points[0];
    int maxSoFar=points[0];
    for(int i=1;i<n;i++)
    {
        if(points[i]<minSoFar) {
            amazingCnt++;
            minSoFar=points[i];
        }
        if(points[i]>maxSoFar)
        {
            amazingCnt++;
            maxSoFar=points[i];
        }
    }
    cout<<amazingCnt<<endl;
    return 0;
}