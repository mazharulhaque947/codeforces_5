#include<bits/stdc++.h>
using namespace std;

int main()
{
    int b[100],i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        m=n-1;
        k=1;
        b[n-1]=n;
        for(i=n-2;i>=0;i--){ b[i]=b[i+1]+(m-k*2*m); m--; k=1-k; }
        for(i=0;i<n;i++){ cout<<b[i]<<" "; } cout<<"\n";

    }

    return 0;
}
