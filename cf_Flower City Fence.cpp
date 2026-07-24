#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],b[200],c[200],d[200],f[200],i,p,o,k,l,j,m,n,t;

    cin>>t;

    while(t--)
    {

        cin>>n;

        for(i=0;i<n;i++){ cin>>a[i]; }
        l=0;
        o=0;
        m=0;

        for(i=0;i<n;i++){

                if(a[i]==a[o]){ m++; }
                else{ c[l]=a[o]; f[l]=m; m=1; o=i; l++; }

                if( i==n-1 ){  c[l]=a[o]; f[l]=m; m=1; o=i; l++;  }
        }
          //   for(i=0;i<l;i++){ cout<<c[i]<<" "<<f[i]<<"\n";  }
        p=l;
        l=1;
        m=0;
        j=n-1;
        for(  ; true ; ){
           if(j<0){break;}
           if( a[j]>=l ){ b[m]=j+1;d[m]=a[j]-l+1; m++; l=a[j]+1;; }
           else{j--;}


        }
       // for(i=0;i<m;i++){ cout<<b[i]<<" "<<d[i]<<"\n";  }
        k=1;
        if(p!=m){k=0;}
        else{
        for(i=0;i<m;i++){ if(c[i]!=b[i] || f[i]!=d[i] ){k=0; break;} }
        }
        if(k){cout<<"YES";}
        else{cout<<"NO";}
         cout<<"\n";


    }

    return 0;
}
