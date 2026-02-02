#include<bits/stdc++.h>
using namespace std;

double l(double a,double b,double c,double d){

  double g;

  g=(c-a)*(c-a)+(d-b)*(d-b);

  g=sqrt(g);

  return g;
}

double m(int a,int b){
  double r;

  r=a+b;
  r=r/2;

  return r;
}

double o(double m){ m=m/2; return m; }
int main()
{
    int a,b,c,d,g,h,i,j;
   // cin>>a>>b;
   cin>>a>>b>>c>>d;
   for(i=0;i<d;i++){
            cin>>g>>h;

    if( c >=l( a,b,g,h ) ){cout<<"YES\n";}
    else{ cout<<"NO\n"; }
   }
    return 0;
}

