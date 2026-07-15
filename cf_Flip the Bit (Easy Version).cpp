#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,k,m,n,o,p,t;
    cin>>t;

    while(t--)
    {

        cin>>n>>k;
        for(i=0;i<n;i++){ cin>>a[i]; }

        o=p=1;
        cin>>k;

        i=k-1;
        while(i>0){  if(a[i]!=a[i-1]){o++;} i--; }
        i=k-1;
        while(i<n-1){  if(a[i]!=a[i+1]){p++;} i++; }

       p=max(o,p);
       p-=p%2;

      cout<<p<<"\n";


    }

    return 0;
}
