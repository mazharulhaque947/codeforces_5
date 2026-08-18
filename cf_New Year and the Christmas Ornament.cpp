#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3],j,k,m,n,o,p,t,i;

    //cin>>t;
     t=1;
    while(t--)
    {

        cin>>a[0]>>a[1]>>a[2];
        k=a[2];

        for(i=2;i>=0;i--){  if(a[i]>=k){  } else{ k=a[i];} k--; }

        k++;
       // cout<<k<<"\n";
        cout<<3*k+3<<"\n";



    }

    return 0;
}
