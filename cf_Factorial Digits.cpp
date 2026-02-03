#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i,n,p,t,q[4];
    float o,m;
       cin>>a;
       m=0;
       for(i=1;i<=a;i++){ o=0; o=log10(i); m+=o; }
       p=m+1;

      cout<<"Number of digits of "<<a<<"! is "<<p<<"\n";


    return 0;
}


