#include<bits/stdc++.h>
using namespace std;
int pp(int v)
{
   int z,p,q;
   q=100;
   p=1;
   z=1;
   while(v>0)
   {

       if(v%2==1){ p=((p%q)*(z%q))%q;  }

       v=v/2;
       z=(z*2)%q;

   }

    return p;
}
int main()
{
    int i,j,k,l,m,n,o[100],p[100],t;
    cin>>t;

    for(i=0;i<t;i++){cin>>o[i];}
    for(i=0;i<t;i++){cin>>p[i];}
    for(i=0;i<t;i++){cout<<pp(o[i])<<"\n";}
    return 0;
}
