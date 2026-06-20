
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,o,p,a[100],b[100],c[100],d[100],t;

    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++){cin>>a[i];}

        sort(a,a+n);

        l=m=k=0;

        for(i=0;i<n;i++){

            if(a[i]==a[k]){m++;}
            else{b[l]=a[k];c[l]=m; l++; k=i; m=1;}
            if(i==n-1){ b[l]=a[k];c[l]=m; l++; m=1; }

        }

        k=1;
        if(l==1&&c[0]>1){ k=0; }
        else if(c[l-1]>1){m=0;

        d[0]=b[0];
         for(j=0;j<c[l-1];j++){d[1+j]=b[l-1]; }
        for(i=l-2;i>=1;i--){ for(j=0;j<c[i];j++){d[c[l-1]+1+m]=b[i]; m++; } }

            for(j=0;j<c[0]-1;j++){d[c[l-1]+1+m]=b[0]; m++; }
         }
        else{ m=0;for(i=l-1;i>=0;i--){ for(j=0;j<c[i];j++){d[0+m]=b[i]; m++; } } }
        if(k==0){cout<<"NO\n";}
        else{

            cout<<"YES\n";
            for(i=0;i<n;i++){cout<<d[i]<<" ";}
             cout<<"\n";
        }
    }

   return 0;

}
