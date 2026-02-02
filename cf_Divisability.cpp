#include<bits/stdc++.h>
#define int long long
using namespace std;



int32_t main()
{
    int a,b,c,d,g,h,i,j;
   // cin>>a>>b;
   cin>>a>>b>>c;

  j=b/c;
//if(j*c!=b){  j--; }

i=a/c;
if(i*c!=a){  i++; }
j=(j-i+1);
i=( j*(2*i+(j-1)))/2;

cout<<i*c;

    return 0;
}



