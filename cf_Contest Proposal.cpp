//Contest Proposal
#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[100],b[100],c[100],i,j,k,n,m,t,o,p;
cin>>t;
while(t--)
{
cin>>n;
for(i=0;i<n;i++){  cin>>a[i]; }
for(i=0;i<n;i++){  cin>>b[i]; }
p=0;
for(i=n-1;i>=0;i--){  o=i; while(a[o]>b[i]){ o--;if(o<0){ break; } }    if(p<(i-o)){ p=i-o;  } }
cout<<p<<"\n";
}
return 0;
}