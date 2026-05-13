#include<bits/stdc++.h>
using namespace std;
int main()
{
   int a[10][10],i,j,k,l,m,n,t;
   string q[10];
   for(i=5;i>=1;i--){

       for(j=0;j<10;j++){ a[j][i-1]=i; a[j][10-i]=i; a[i-1][j]=i; a[10-i][j]=i; }

   }
  // for(i=0;i<10;i++){

    //  for(j=0;j<10;j++){ cout<<a[i][j]<<" "; } cout<<"\n";
  // }

   cin>>t;
    while(t--)
    {
        for(i=0;i<10;i++){cin>>q[i];}
        k=0;
         for(i=0;i<10;i++){

      for(j=0;j<10;j++){ if(q[i][j]=='X') {k=k+a[i][j];}  }
   }
    cout<<k<<"\n";

    }

    return 0;
}
