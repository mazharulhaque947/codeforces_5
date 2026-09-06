#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[200][200],i,j,k,l,m,n,t;

cin>>t;
while(t--)
{
cin>>n>>m;
for(i=0;i<m;i++){  k=i/2; k%=2; a[0][i]=k-i%2;   }
for(i=1;i<n;i++)
{
for(j=0;j<m;j++){
   if(i%2){  a[i][j]=1-a[i-1][j];   }
  else{ a[i][j]=a[i-1][j];  }
}
}
for(i=0;i<n;i++)
{
for(j=0;j<m;j++){ cout<<a[i][j]<<" ";  }
cout<<"\n";
}

cout<<" \n";
}

return 0;
}
