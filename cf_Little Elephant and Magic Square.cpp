#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[3],b[3][3],c[3],i,j,k,l,o,p,m,n,v,nn;

    for(i=0;i<3;i++){ cin>>b[i][0]>>b[i][1]>>b[i][2]; }
    o=b[0][1]+b[0][2];
    p=b[1][0]+b[1][2];
    m=b[2][0]+b[2][1];
  l=o;
     //c[0]=a[0]=o=o-l;
//c[1]=a[1]=p=p-l;
    //c[2]=a[2]= m=m-l;
    //cout<<o<<p<<m;

    c[0]=a[0]=o=o;
    c[1]=a[1]=p=p;
    c[2]=a[2]= m=m;
    //cout<<o<<p<<m;
    sort(a,a+3);
    k=0+a[2];
    o=0;
    nn=0;
    while(-c[0]+k+o+b[0][1]+b[0][2]!=-c[0]+k-c[1]+k-c[2]+k+3*o){cout<<o<<"\n";o++; }
     for(i=0;i<3;i++){
        for(j=0;j<3;j++){ if(i==j){ cout<<-c[i]+k+o<<" "; } else{ cout<<b[i][j]<<" "; }} cout<<"\n";

     }
    return 0;
}
