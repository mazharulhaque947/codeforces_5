#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a[100];
    int n,m,i,j,k,l,t,u;
    vector< vector<int>>b(100,vector<int>(100,1));

  //  for(i=0;i<100;i++){  for(j=0;j<100;j++){ cout<<b[i][j]<<" "; } cout<<"\n"; }
    cin>>n>>m;
    for(i=0;i<n;i++){  cin>>a[i]; }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
           u=0;
           for(k=0;k<n;k++){

             if( i!=k && a[i][j]==a[k][j]){ u=1; }

           }
           for(k=0;k<m;k++){

             if( j!=k && a[i][j]==a[i][k]){ u=1; }

           }

         //cout<<u<<" ";
          b[i][j]=u;
        }
       // cout<<"\n";
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){


          if(b[i][j]==0){ cout<<a[i][j]; }
        }
    }




    return 0;
}
