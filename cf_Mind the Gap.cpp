#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],b[100],k,l,o,p,i,j,t,m,n;
    cin>>n>>m;
    for(i=0;i<n;i++){cin>>a[i]>>b[i]; }
    k=l=0;
    p=0;
    if(((a[0])*60+(b[0]) - (k*60+l ))>=1+m){ p=1; }

    if(p==1){  cout<<k<<" "<<l<<"\n"; }
    else{

    if(p==0){

        for(i=1;i<n;i++){k=a[i-1]; l=b[i-1];
          // cout<<((a[i])*60+(b[i]))-(k*60+l)<<"\n";
           if(((a[i])*60+(b[i]))-(k*60+l)>=(2+2*m)){ p=1; break; }

        }


    }
     if(p==0){

        k=a[n-1]; l=b[n-1];

    }
    //cout<<k<<" "<<l<<"\n";
    k=k+( l+m+1 )/60; l=(l+m+1)%60;
    cout<<k<<" "<<l<<"\n";
    }
    return 0;
}
