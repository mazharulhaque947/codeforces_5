#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a[3],i,j,k,l,m,n,t;

    cin>>t;

    while(t--)
    {

        cin>>n;

        a[0]=a[1]=a[2]=1;

        m=2;

        for(i=4;i<=n;i++){  if(a[m]==26){m--;}a[m]++;  }

        for(i=0;i<3;i++){cout<<(char)(a[i]+96);}
        cout<<"\n";

    }

    return 0;
}
