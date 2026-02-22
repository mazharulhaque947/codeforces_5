#include<bits/stdc++.h>
using namespace std;
int sd(int n){
  int i,k,l;
  k=sqrt(n);
  l=1;
  for(i=2;i<=k;i++){ if(n%i==0){l=n/i; break;} }
  return l;
}
int main()
{
    int a[1000],m,n,k,l,o,p,i,j,t;
    m=1000;
    o=sqrt(m);
    a[0]=0;
    for(i=0;i<m;i++){a[i]=0;}
    for(i=2;i<=o;i++){  if(a[i-1]==0){ a[i-1]=1; for(j=i*i;j<=m;j+=i){ if(a[j-1]==0){a[j-1]=(j/i);}  } } }
    for(i=o;i<=m;i++){ if(a[i-1]==0){a[i-1]=1;} }
   // for(i=0;i<m;i++){ cout<<i+1<<" "<<a[i]<<"\n"; }
    cin>>n;
    p=0;
    o=n;
    while(o!=0){ //cout<<o<<"\n";
p+=o; if(o>m){ o=sd(o); }else{ o=a[o-1]; }  }
    cout<<p<<"\n";
   // getchar();
    return 0;
}

