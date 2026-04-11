#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int a[100],b[100],c[100],d[100],i,j,k,l,m,n,o,p,t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        for(i=0;i<n;i++){ cin>>a[i]; }
        sort(a,a+n);
        m=0;
        l=0;
        o=0;
        for(i=0;i<n;i++){

            if(a[i]==a[o]){m++;}
            else{ b[l]=m; m=1;l++;o=i; }
            if(i==n-1){ b[l]=m; m=1;l++;o=i; }

        }
        for(i=l-1;i>=0;i--){  c[l-1-i]=b[i];  }
         p=0;
       for(i=0;i<l;i++){ p=p+c[i]; d[i]=n-p;}

       //for(i=0;i<l;i++){  cout<<c[i]<<" "<<d[i]<<"\n"; }
        o=0;
        for(i=0;i<l;i++){  o=o+((c[i]*(c[i]-1))/2)*d[i]+((c[i]*(c[i]-1)*(c[i]-2))/6); }
        cout<<o<<"\n";
    }

    return 0;
}

