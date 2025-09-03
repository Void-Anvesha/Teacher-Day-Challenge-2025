#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int lh=INT_MIN, li=0;
    int rh=INT_MAX, ri=0;
    int h;
    for(int i=0;i<n;i++) {
      cin>>h;
      if(h>lh)lh=h,li=i;
      else if(h<=rh) rh=h,ri=i;
    }
    int res=0;
    res=li+(n-1-ri);

    if(li<ri) cout<<res<<endl;
    //if ri<li
    else cout<<res-1<<endl; 



   
    return 0;
}

