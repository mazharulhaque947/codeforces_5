#include<bits/stdc++.h>
#define int long long
using namespace std;
int pp(int a,int b)
{
int c;
c=1;
while(b>0){
if(b%2==1){ c=c*a;  }
a=a*a;
b=b/2;
}
return c;
}

int32_t main()
{
int a,b,c,i,j,k,l,n,m,t,o,v,p;
cin>>t;
while(t--)
{
cin>>n;
l=1;
k=1000; //1000000000
while(k-l>2){
o=l+(k-l)/2;
if( pp(o,2)-o<n) { l=o; }
else if( pp(o,2)-o>=n){ k=o; }
}
for(i=l;  true ;i++){   if(pp(i,2)-i>=n ){  o=i; break;}   }
v=o;
o=pp(o,2)-o;
p=o-n;
cout<<pp(v,2)-p-1<<"\n";
}
return 0;
}
