#include<bits/stdc++.h>
using namespace std;

int main()
{
int u,l,k,i,j,o,p,t,n,m;

cin>>t;

while(t--)
{
cin>>n>>p;
l=-1;k=0;
for(i=0;i<n;i++){ cin>>m;  if(m){ k=i; if(l==-1){ l=i;  } } }
if(l==-1){  cout<<"YES\n"; }
else{
k=k-l+1;
if(k<=p){   cout<<"YES\n"; }
else{  cout<<"NO\n"; }

}
}

return 0;
}

