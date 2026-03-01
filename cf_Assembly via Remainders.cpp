#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[100],b[100],i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        m=0;
        for(i=1;i<n;i++){ cin>>a[i]; m+=a[i]; }
        b[0]=m+1;

        for(i=1;i<n;i++){ b[i]=b[i-1]+a[i];   }
         for(i=0;i<n;i++){ cout<<b[i]<<" ";  } cout<<"\n";
        // for(i=1;i<n;i++){ cout<<b[i]%b[i-1]<<" ";  } cout<<"\n";
    }

    return 0;
}
