#include<bits/stdc++.h>
using namespace std;
void mm(int a[10][10],int b[10][10],int i,int j,int n,int m){
a[i][j]=a[i][j]+b[i][j];
 if(i!=n&&j!=m){  cout<<a[i][j]<<" ";}
   if(i!=n){

       if(j!=m){mm(a,b,i,j+1,n,m);}
       else{ cout<<"\n";mm(a,b,i+1,0,n,m); }

    }



}
int main()
{

    int a[10][10],b[10][10],i,j,k,m,n,l;


    cin>>n>>m;

  //  for(i=0;i<10;i++){ for(j=0;j<10;j++){  cout<<&a[i][j]<<" "; }  cout<<"\n";}
    for(i=0;i<n;i++){ for(j=0;j<m;j++){  cin>>a[i][j]; }  }
    for(i=0;i<n;i++){ for(j=0;j<m;j++){  cin>>b[i][j]; }  }
    mm(a,b,0,0,n,m);

}
