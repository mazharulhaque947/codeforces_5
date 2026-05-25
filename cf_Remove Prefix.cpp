#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],b[200],i,j,k,l,m,n,o,t;

    cin>>t;

    while(t--)
    {
        cin>>n;
        m=200;
        for(i=0;i<m;i++){ b[i]=0; }
        k=1;
        for(i=0;i<n;i++){ cin>>a[i];  b[a[i]-1]++; if(b[a[i]-1]>=2){ k=0; break; } }

        if(k==0){ cout<<"NO\n"; }
        else{ cout<<"YES\n"; }
    }

    return 0;
}
