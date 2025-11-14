
#include<bits/stdc++.h>

using namespace  std;

int main()
{
    int i,j,k,l,m,n,o,p,b[100];
     char a[101],r;
     char kk[3]="BD";
     char hh[3]="PT";

   cin>>a;
   n=strlen(a);
   r=a[0];
    p=0;
    m=0;
    o=a[0];
    for(i=0;i<n;i++){

        if(a[i]==o){ p++; }
        else{  b[m]=p; p=1; m++; o=a[i];  }
        if(i==n-1 ){ b[m]=p;  m++;    }
    }

    j=0;
    if(r=='S'){ j=1;}
    for(i=0;i<m;i++){

            for(k=0;k<b[i];k++){

                if((k+1)%3!=0){ cout<<kk[j]; }
                else{ cout<<hh[j]; }

            }

            j=1-j;

     }

    return 0;
}
