#include<bits/stdc++.h>
using namespace std;
int vv(int a[],int n, int m, int i){
int v,u;
v=0;
if(a[i]==a[n-1-i]){v=1;}

if(i!=0){
if(i+1<m){ return v+vv(a,n,m,i+1); }
else{return v;  }
}
else if(i==0){
    if(m>1){u=v+vv(a,n,m,i+1);}
    else if(m==1){u=v;}
    else{u=0;}
    if(m==u){cout<<"YES\n";}
    else{ cout<<"NO\n"; }
    if(i+1<m){ return v+vv(a,n,m,i+1); }
else{return v;  }
}
}
int main()
{
    int n,a[1000],i,m;
    cin>>n;
    m=n/2;
    for(i=0;i<n;i++){cin>>a[i];}

    vv(a,n,m,0);

    return 0;
}
