#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],b[101],i,j,k,l,m,n,o,p,t;
    cin>>t;
    while(t--)
    {

        cin>>n>>k;
        o=n*(n+1);
        o=o/2;
        p=0;
        for(i=0;i<n;i++){ cin>>a[i]; p=p+a[i]; }
        o=o-p;
        b[ n ]=o;
        for(i=0;i<n;i++){  b[ i ]= a[i]; }

         for(i=0;i<n;i++){ cout<<b[ (n-(k%n )+i)%(n+1) ]<<" "; } cout<<"\n";
    }

    return 0;
}
