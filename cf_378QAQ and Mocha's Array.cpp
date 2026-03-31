#include<bits/stdc++.h>
using namespace std;

int main()
{
int p[100],q[200],i,j,k,l,m,z,x,y,n,o,t,a[100],b[100],c[100][25],d[100],g[100],v[100],oo;
m=10;
for(i=0;i<m;i++){  p[i]=0; }
o=sqrt(m);
p[0]=1;
for(i=1;i<=o;i++){
 if(p[i-1]==0){  for(j=i*i;j<=m;j+=i){  p[j-1]=1; }  }
}
l=0;
for(i=0;i<m;i++){  q[l]=i+1; if(p[i]==0){ l++;  }  }
cin>>t;
while(t--)
{
cin>>n;
for(i=0;i<n;i++){ cin>>a[i];c[i][0]=1; c[i][1]=a[i];
o=0;
while(o<l){
k=c[i][c[i][0]];
if( k%q[o]==0){  c[i][c[i][0]]=q[o];
if(k/q[o]!=1){
c[i][0]++ ;
c[i][c[i][0]]=k/q[o]; }
else{  break;  }
 }
else{  o++;  }
}
  }
for(i=0;i<m;i++){ b[i]=100; }

//for(i=0;i<n;i++){ for(j=1;j<=c[i][0];j++){ cout<<c[i][j]<<" "; } cout<<"\n"; }
for(i=0;i<n;i++){ z=c[i][1]; x=0;y=0;
    for(j=1;j<=c[i][0];j++){ if(z==c[i][j]){x++;}else{ d[y]=z; g[y]=x; y++; z=c[i][j];} if(j==c[i][0]){d[y]=z; g[y]=x; y++; } }
    //for(j=0;j<y;j++){  if(b[ d[j]-1 ]>g[j]){  b[ d[j]-1 ]=g[j];} }
    for(j=0;j<m;j++){ v[j]=0; }
    for(j=0;j<y;j++){  v[ d[j]-1 ]=g[j]; }
    for(j=0;j<m;j++){ b[j]=min(b[j],v[j]); }
}
//for(i=0;i<m;i++){ if(b[i]==100){ b[i]=0; } cout<<i<<" "<<b[i]<<"\n"; }
o=0;
for(i=0;i<n;i++){ z=c[i][1]; x=0;y=0;
    for(j=1;j<=c[i][0];j++){ if(z==c[i][j]){x++;}else{ d[y]=z; g[y]=x; y++; z=c[i][j];} if(j==c[i][0]){d[y]=z; g[y]=x; y++; } }
    oo=1;
    for(j=0;j<y;j++){  if(b[ d[j]-1 ]<g[j]){  oo=0; break;} }

    o=o+oo;

}
if(o>=2){cout<<"YES\n";}
else{ cout<<"NO\n"; }
}
return 0;
}
