
#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int a[100],b[100],c[100],i,j,k,m,n,r,q,o,l,p,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>m>>k;
        o=0;
        for(i=0;i<n;i++){ cin>>a[i]; if(a[0]==a[i]){o++;} b[i]=a[i]; }
        sort(b,b+n);
        c[0]=b[0];
        for(i=1;i<n;i++){ c[i]=b[i]; b[i]=b[i-1]+b[i]; }
       if(o>1){
        p=0;
        r=0;
        while(a[0]*m<b[n-1-p]*k){  p++;}

          cout<<p<<"\n";
       }
       else{

         p=0;
         r=0;
         q=0;
        while(true){ if(p>=n){break;}  if(a[0]*m>=(b[n-1-p]+q)*k){ break; }if(c[n-1-p]==a[0]){ q=a[0]; r=1;} p++;}

          cout<<p-r<<"\n";

       }

    }

    return 0;
}
