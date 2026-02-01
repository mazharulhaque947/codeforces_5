#include<bits/stdc++.h>
#define int long long
using namespace std;
int p(int n)
{
    int i,j,k,l,m;

   m=sqrt(n);
   l=1;
   for(i=2;i<=m;i++){ if(n%i==0){l=0; break;} }
   if(n==1){l=0;}



    return l;
}



int ip(int a[],int n, int c){
   if(c==0){return 0;}
   if(c<=n){ return a[c-1]; }
   else{  return p(c);  }

}

int32_t main()
{
    int n,m,i,j,k,l,o,p[100],a[100],c[100],d[100];
    m=100;
    k=sqrt(m);
    for(i=0;i<m;i++){a[i]=1;}
    a[0]=0;
    for(i=2;i<=k;i++){ if(a[i-1]==1){  for(j=i*i;j<=m;j+=i){ a[j-1]=0; } } }
    l=0;
     for(i=0;i<m;i++){if(a[i]==1){p[l]=i+1;/* cout<<p[l]<<" ";*/l++; } } //cout<<"\n";
    k=0;
    cin>>n;

    if(ip(a,m,n)==1){ k++; c[0]=n;d[0]=1; }
    else{
       o=0;
       j=0;
     while(n!=1){

       while(n%p[o]!=0){o++;}
       while(n%p[o]==0){n=n/p[o];j++;}
       c[k]=p[o];
       d[k]=j;
       j=0;
       k++;
     }
    }

    for(i=0;i<k;i++){ cout<<"("<<c[i]<<"^"<<d[i]<<")"; if(i==k-1){cout<<"\n";}else{ cout<<"*"; } }

    return 0;
}
