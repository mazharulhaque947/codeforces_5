#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],b[100],i,j,k,l,m,n,o,p,t;
    cin>>t;
    while(t--)
    {

        cin>>n>>k;
        o=n*(n+1);
        o=o/2;
        p=0;
        for(i=0;i<n;i++){ cin>>a[i]; p=p+a[i]; }
        o=o-p;
        b[ ((k-1)+0)%n ]=o;
        for(i=1;i<n;i++){  b[ ((k-1)+i)%n ]= a[i-1]; }

         for(i=0;i<n;i++){ cout<<b[i]<<" "; } cout<<"\n";
    }

    return 0;
}
