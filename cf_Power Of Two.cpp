#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,l,m;
    cin>>n;
    l=0;
    m=1;
    while( (n&m)==0){m=m<<1;l++;}
   // cout<<l<<"\n";
   // cout<<(1<<l)<<"\n";
    if(1<<l==n){cout<<"YES\n";}
    else{ cout<<"NO\n"; }

    return 0;
}
