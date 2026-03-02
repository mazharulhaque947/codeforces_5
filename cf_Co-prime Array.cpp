#include<bits/stdc++.h>
using namespace std;
int  gg(int a, int b)
{
    int c;
    c=1;
    while(a>0){

        c=b%a;
        b=a;
        a=c;

    }

    return b;
}

int nn(int a,int b){

  int c,i,k;
  k=50000;
  c=1;
  for(i=2;i<=k;i++){ if( gg(a,i)==1&&gg(b,i)==1  ){c=i; break;} }

  return c;
}
int main()
{

    int a[100],b[200],i,j,k,l,m,n,o,t;
    cin>>n;
    l=0;
    for(i=0;i<n;i++){ cin>>a[i]; if(i>0){ //cout<<gg(a[i],a[i-1])<<" \n";

       if( gg(a[i],a[i-1])!=1  ){ b[2*l]=i-1; b[2*l+1]=nn(a[i],a[i-1]); l++;}

    } }

    o=0;
    cout<<l<<"\n";
    for(i=0;i<n;i++){ cout<<a[i]<<" "; if(i==b[2*o]){ cout<<b[2*o+1]<<" "; o++; } }

    return 0;
}
