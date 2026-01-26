#include<bits/stdc++.h>

using namespace std;

int main()
{
int p[100],i,j,k,l,m,n,t,a[100],c[100],d[100],u,v;

m=100;
for(i=0;i<m;i++){ p[i]=0; }
p[0]=0;
n=sqrt(m);
for(i=1;i<=n;i++){ if(p[i]==0){ for(j=(i+1)*(i+1);j<=m;j=j+i+1){  p[j-1]=1; }} }
//for(i=0;i<m;i++){ cout<<i+1<<" "<<p[i]<<"\n"; }
cin>>t;

while(t--){
  cin>>n;
  for(i=0;i<n;i++){ c[i]=-1; }
  for(i=0;i<n;i++){ cin>>a[i]; c[a[i]-1]=1; }

  for(i=0;i<n;i++){

     if(p[i]==0){ if(c[i]==1){d[i]=1;}else{ d[i]=-1; } }
     else{

       k=sqrt(i+1);
       d[i]=-1;

       for(j=2;j<=k;j++){  if( (i+1)%j==0 ){u=j; v=(i+1)/j;
           if(d[u-1]!=-1&&d[v-1]!=-1){if(d[i]==-1){ d[i]=d[u-1]+d[v-1]; } else{ if(d[i]>d[u-1]+d[v-1]){d[i]=d[u-1]+d[v-1];} } }
          }
      }
     }

  }

for(i=0;i<n;i++){  cout<<d[i]<<" "; } cout<<"\n";
}

return 0;
}
