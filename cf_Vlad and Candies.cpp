// Vlad and Candies

#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[200],i,j,k,n,m,l,o,p,t;
cin>>t;
while(t--)
{
cin>>n;
for(i=0;i<n;i++){ cin>>a[i]; }
sort(a,a+n);
if(n==1){ if(a[0]==1){  cout<<"YES\n";}else{ cout<<"NO\n"; } }
else{
if(a[n-1]>a[n-2]+1){   cout<<"NO\n"; }
else{  cout<<"YES\n"; } }
}
return 0;
}
