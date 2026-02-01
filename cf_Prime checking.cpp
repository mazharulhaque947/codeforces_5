#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,m;
    cin>>n;
   m=sqrt(n);
   l=1;
   for(i=2;i<=m;i++){ if(n%i==0){l=0; break;} }


    if(l==1){cout<<"YES\n";}
    else{ cout<<"NO\n"; }

    return 0;
}

