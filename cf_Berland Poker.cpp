
//Berland Poker

#include<bits/stdc++.h>
using namespace std;

int main()
{
int a,b,c,i,j,k,n,m,t,o,p;
cin>>t;
while(t--)
{
cin>>n>>m>>k;
o=n/k;
if(o<=m){ a=o; b=m-o; }
else{ a=m; b=0;   }
c=b%(k-1);
if(c==0){ c=b/(k-1);  }
else{  c=(b/(k-1)) +(b%(k-1)); }
p=a-c;
//if(p<0){  p=0;}
cout<<p<<"\n";
}
return 0;
}
