#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[200000],c[200000],d[200000],i,j,k,n,m,t,o,p;
cin>>t;
while(t--){
m=200000;
for(i=0;i<m;i++){c[i]=d[i]=0;}
 cin>>n;
o=0;
for(i=0;i<n;i++){  cin>>a[i];
if(a[i]==1){  o=1; }
 if(a[i]<=m){ c[a[i]-1]++; } }
p=0;
for(i=2;i<=m;i++){
if(c[i-1]>0)
{
for(j=i;j<=m;j+=i){
if(c[j-1]>0){  d[j-1]=d[j-1]+c[i-1];
if(d[j-1]>d[p]){p=j-1;} }
}
}
}

if(o==1){ o=c[0]; }
o+=d[p];
cout<<o<<"\n";

}
return 0;
}
