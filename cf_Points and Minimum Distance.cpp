#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,n,j,k,l,x[100],y[100],t;

    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<2*n;i++){cin>>a[i];}
        sort(a,a+2*n);
        for(i=0;i<n;i++){x[i]=a[i];y[i]=a[n+i];}
        k=0;
        for(i=0;i<n-1;i++){ l=x[i+1]-x[i]; if(l<0){l=l*-1;} k=k+l; l=y[i+1]-y[i]; if(l<0){l=l*-1;} k=k+l;}

        cout<<k<<"\n";
         for(i=0;i<n;i++){cout<<x[i]<<" "<<y[i]<<"\n";}

    }

    return 0;
}
