#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,l,n,t,o,p,b[100];
    char a[101];
    cin>>n;
    cin>>a;
    p=a[0];
    o=0;
    l=0;
    for(i=0;i<n;i++){
        j=a[i];
        if(j==p){o++;}
        else{ if(p==120){ b[l]=o; l++; } p=j; o=1; }
        if(i==n-1){  if(p==120){ b[l]=o; l++; }  }



    }
    o=0;
    for(i=0;i<l;i++){ if(b[i]>=3){ o=o+b[i]-2; } }
    cout<<o<<"\n";


    return 0;
}
