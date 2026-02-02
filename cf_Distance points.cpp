#include<bits/stdc++.h>
using namespace std;

double l(double a,double b,double c,double d){

  double g;

  g=(c-a)*(c-a)+(d-b)*(d-b);

  g=sqrt(g);

  return g;
}

int main()
{
    int a,b,c,d,g,h,i,j;
   // cin>>a>>b;
   cin>>a>>b>>c>>d;

  cout<<l(a,b,c,d);
    return 0;
}

