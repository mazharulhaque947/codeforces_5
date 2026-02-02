#include<bits/stdc++.h>
#define int lng long
using namespace std;



int main()
{
    int a,b,c,d,g,h,i,j;
   // cin>>a>>b;
   cin>>a;
  b=0;
  g=sqrt(a);

  for(i=1;i<=g;i++){ if(a%i==0){b=b+i+a/i; } }
  if(g*g==a){ b=b-g; }
  cout<<b;
    return 0;
}


