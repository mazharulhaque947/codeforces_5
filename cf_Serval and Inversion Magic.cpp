
// Serval and Inversion Magic
#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[100000],i,j,k,n,m,l,t,o,p;
string q;
cin>>t;
while(t--)
{
cin>>n;
cin>>q;
l=0;
m=n/2;
for(i=0;i<m;i++){ if(q[i]!=q[n-1-i]){ a[l]=i;  l++;}  }
p=1;
for(i=1;i<l;i++){   if(a[i]!=a[i-1]+1){p=0;}}
if(p==1){ cout<<"YES\n"; }
else{ cout<<"NO\n"; }
}
return 0;
}
