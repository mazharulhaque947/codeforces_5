#include<bits/stdc++.h>

using namespace  std;

int main()
{
    int a[100],i,j,k,l,m,n,o,p,b[100];

    cin>>n;

    for(i=0;i<n;i++){ cin>>a[i]; }
    sort(a,a+n);
    p=0;
    m=0;
    o=a[0];
    for(i=0;i<n;i++){

        if(a[i]==o){ p++; }
        else{  b[m]=p; p=1; m++; o=a[i];  }
        if(i==n-1 ){ b[m]=p;  m++;    }
    }
    j=0;
    if(a[0]==0){  j++;  }
    p=0;
    l=0;

    for(i=j;i<m;i++){ if(b[i]>2){l=1; break;}
     else if(b[i]==2){p++;}


     }
    if(l==1){ cout<<"-1\n"; }
    else{ cout<<p<<"\n"; }
    return 0;
}
