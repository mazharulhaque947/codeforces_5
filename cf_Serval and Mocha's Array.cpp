//Serval and Mocha's Array

#include<bits/stdc++.h>
using namespace std;
int gg(int a,int b)
{
int c;
c=1;
while(a!=0){
c=b%a;
b=a;
a=c;
  }
return b;
}
int main()
{
int a[100],i,j,k,l,o,n,p,t;
cin>>t;
while(t--)
{
cin>>n;
for(i=0;i<n;i++){ cin>>a[i];   }

o=0;
for(i=0;i<n;i++){
for(j=i+1;j<n;j++)
{
if(gg(a[i],a[j])<=2){ o=1; break; }
}
if(o==1){  break; }
}
if(o==1){  cout<<"YES\n"; }
else{ cout<<"NO\n";  }
}
return 0;
}
