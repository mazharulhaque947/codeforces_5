#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,t,o,a[1000];

   cin>>t;

   while(t--)
   {
       cin>>n>>k;
       a[0]=0;
       a[n+1]=k;
       o=0;
       for(i=1;i<n+1;i++){cin>>a[i]; }
       for(i=1;i<n+2;i++){  j=a[i]-a[i-1];  if(i==n+1){j=j*2;} if(j>o){o=j;} }
       cout<<o<<"\n";

   }
    return 0;
}


