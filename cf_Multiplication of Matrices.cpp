
// matrix multiplication

#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[100][100],b[100][100],i,j,k,n,m,l,u,v;
cin>>n>>m;
for(i=0;i<n;i++){ for(j=0;j<m;j++){cin>>a[i][j];  }}
cin>>u>>v;
for(i=0;i<u;i++){ for(j=0;j<v;j++){cin>>b[i][j];  }}


for(i=0;i<n;i++){ for(j=0;j<v;j++){
   l=0;
for(k=0;k<m;k++){  l=l+a[i][k]*b[k][j];   }
cout<<l<<" ";
  } cout<<"\n";}
return 0;
}
