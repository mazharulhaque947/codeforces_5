#include<bits/stdc++.h>
using namespace std;

int vv(int a[10][10],int n,int m, int i, int j)
{
    int u,v;
    //u=v=a[i][j];
    u=v=0;
     if(i==n-1&&j==m-1){ return a[i][j];}
    if(i+1<n){
      u=vv(a,n,m,i+1,j);
    }
    if(j+1<m){
      v=vv(a,n,m,i,j+1);

    }
    if(v>u){u=v;}
    return a[i][j]+u;
}
int main()
{
    int a[10][10],i,j,k,l,m,n;
    cin>>n>>m;
    for(i=0;i<n;i++){

        for(j=0;j<m;j++){
            cin>>a[i][j];
        }

    }
    cout<<vv(a,n,m,0,0);
    return 0;
}
