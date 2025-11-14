#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main()
{
   char a[101],b[101];

   int i,j,k,m,n,c[100],d[100];

    cin>>n;
    cin>>a;
    k=sqrt(n);
    j=0;
    for(i=2;i<=k;i++){ if(n%i==0){ c[j*2]=i; c[2*j+1]=n/i; j++;}  }
    m=0;
    for(i=0;i<j;i++){ d[m]=c[i*2]; m++;  }
    for(i=0;i<j;i++){ k=c[(j-i-1)*2+1]; if(d[m-1]==k){  } else{ d[m]=k; m++;}  }
    d[m]=n;
    m++;

    //for(i=0;i<m;i++){ cout<<d[i]<<" "; }

    for(i=0;i<m;i++){

        k=d[i]-1;
        for(j=k;j>=0;j--){  b[j]=a[j]; }
         for(j=0;j<=k;j++){  a[j]=b[k-j]; }


    }
    cout<<a<<"\n";
    return 0;
}
