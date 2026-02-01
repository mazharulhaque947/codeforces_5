
#include<bits/stdc++.h>
#define int long long

using namespace std;
int ss(int a,int n,int d){

  int u;
  u=2*a+(n-1)*d;
  u=u*n/2;
  return u;

}

int es(int a,int b){

   if(a%2==1){a++;}
   if(b%2==1){b--;}
   b=(b-a+2)/2;
   return ss(a,b,2);
}
int os(int a,int b){

   if(a%2==0){a++;}
   if(b%2==0){b--;}
   b=(b-a+2)/2;
   return ss(a,b,2);
}
int32_t main()
{
    int a,b;
    cin>>a>>b;
    if(b<a){swap(a,b);}
     cout<<ss(a,b-a+1,1)<<"\n";
     cout<<es(a,b)<<"\n";
     cout<<os(a,b)<<"\n";
    return 0;
}

