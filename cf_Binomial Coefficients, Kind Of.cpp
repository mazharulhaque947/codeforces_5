#include<bits/stdc++.h>
#define int long long
using namespace std;
int pp(int v)
{
   int z,p,q;
   q=1000000007;
   p=1;
   z=2;
   while(v>0)
   {

       if(v%2==1){ p=(p*z)%q;  }

       v=v/2;
       z=(z*z)%q;

   }

    return p;
}
int32_t main()
{
    int i,j,k,l,m,n,o[200],p[200],t;
    cin>>t;

    for(i=0;i<t;i++){cin>>o[i];}
    for(i=0;i<t;i++){cin>>p[i];}
    for(i=0;i<t;i++){cout<<pp(p[i])<<"\n";}
    return 0;
}
