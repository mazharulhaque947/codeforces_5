#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[50],b[50],i,j,k,n,m,l,o,p,t;
cin>>t;
while(t--)
{
cin>>n;
for(i=0;i<n;i++){ b[i]=0;cin>>a[i];  }
sort(a,a+n);
p=1;
for(i=n-1;i>=0;i--){
k=a[i];
while(k>=0){
if(k==0){ p=0; break; }
if(k<=n&&b[k-1]==0){  b[k-1]=1;  break;}
k=k/2;
}
if(p==0){break;  }
}
if(p==1){  cout<<"YES\n";}
else{ cout<<"NO\n";}
}
return 0;
}
