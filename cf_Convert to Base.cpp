// Convert to Base

#include<bits/stdc++.h>
using namespace std;
int vv(char a){
if(a<65){ return a-48;}
else {   return a-55; }
}
char cc(int a)
{
if(a<=9){ return a+48;}
else{   return a+55;}

}
int main()
{
string a,b;
int i,j,n,m,k,o,u,v,t;
cin>>t;
if(t==1){cin>>a>>m;n=a.size();}
else {  cin>>k>>m;}

if(t==1){  o=1;k=0; for(i=n-1;i>=0;i--){ k=k+o*vv(a[i]);o=o*m; }   cout<<k<<"\n";}
else{
        //cout<<k<<"\n";
u=0;
while(k>0){
       // cout<<cc(k%m)<<"\n";
b[u]=cc(k%m);
k=k/m;
u++;

}
for(i=u-1;i>=0;i--){   cout<<b[i];} cout<<"\n";
}


return 0;
}
