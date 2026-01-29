
//Knapsak

#include<bits/stdc++.h>
using namespace std;
int vv(int a[],int b[],int n,int i,int w){
if(i>=n||w<=0){  return 0;  }

int u,v;
v=vv(a,b,n,i+1,w);
u=0;
if(w-b[i]>=0){  u=a[i]+vv(a,b,n,i+1,w-b[i]);  }
//cout<<a[i]<<" "<<u<<" "<<v<<"\n";
return max(u,v);

}

int main()
{
int a[100],b[100],i,j,n,k,m,w;
cin>>n>>w;
for(i=0;i<n;i++){ cin>>b[i]>>a[i];   }
cout<<vv(a,b,n,0,w);
return 0;
}
