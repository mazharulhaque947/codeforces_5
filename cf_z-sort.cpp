#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],b[200],i,j,k,l,m,n,t;
    //cin>>t;
    t=1;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){cin>>a[i];}
        sort(a,a+n);


        m=n/2;
        k=n%2;
        for(i=0;i<m;i++){ b[1+2*i]=a[n-1-i];  }
        for(i=0;i<n-m;i++){ b[n-1-1+k-2*i]= a[i]; }

        k=1;
        for(i=1;i<n;i+=2){ if(b[i]<b[i-1]){k=0;} }
        for(i=2;i<n;i+=2){ if(b[i]>b[i-1]){k=0;} }

        if(0==0){ for(i=0;i<n;i++){ cout<<b[i]<<" "; } cout<<"\n"; }
        else{ cout<<"impossible\n"; }

    }

    return 0;
}
