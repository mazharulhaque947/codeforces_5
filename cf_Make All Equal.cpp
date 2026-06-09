#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],c[100],i,t,j,k,m,n;

    cin>>t;

    while(t--)
    {

        cin>>n;
        for(i=0;i<n;i++){ cin>>a[i]; c[i]=0; }
        k=0;
        for(i=0;i<n;i++){  c[a[i]-1]++; if(c[a[i]-1]>k){ k=c[a[i]-1]; }  }

        cout<<n-k<<"\n";
    }

    return 0;
}
