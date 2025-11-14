
#include<bits/stdc++.h>

using namespace  std;

int main()
{
    int a[100],i,j,k,l,m,n,o,p,b[100];

    cin>>n;

    for(i=0;i<n;i++){ cin>>a[i]; }

    p=0;
    m=0;
    o=a[0];
    for(i=0;i<n;i++){

        if(a[i]==o){ p++; }
        else{  b[m]=p; p=1; m++; o=a[i];  }
        if(i==n-1 ){ b[m]=p;  m++;    }
    }

    p=0;
    l=0;
     k=0;
    for(i=0;i<m-1;i++){
            l=b[i];

            if(b[i+1]<l){l=b[i+1]; }

     if(l>k){ k=l; }


     }
    if(0){ cout<<"-1\n"; }
    else{ cout<<2*k<<"\n"; }
    return 0;
}
