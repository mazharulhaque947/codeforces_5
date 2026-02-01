#include<bits/stdc++.h>
#define int long long
using namespace std;
int32_t main()
{
    int n,i,j,k,l,m;
    cin>>n;
   m=sqrt(n);
   l=1;
   for(i=2;i<=m;i++){ if(n%i==0){l=0; break;} }
   if(n==1){l=0;}

    if(l==1){cout<<"YES\n";}
    else{ cout<<"NO\n"; }

    return 0;
}

