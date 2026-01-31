//Combintion
#include<bits/stdc++.h>
using namespace std;
int f(int n,int b){
    int v=1;
     v=v*(n-b+1);
  if(b>1) { v=v*f(n,b-1);}
   return v;
}
float c(int a,int b){
float v;
v=1;
if(b==0){  return v;}
else if(b>a){v=0; return v;}
else{   return f( a,b )/f(b,b ); }

return v;
}

int main()
{
int n,k;
cin>>n>>k;
//cout<<f(n,k)<<" "<<f(k,k)<<"\n";

cout<<c(n,k);
return 0;
}

