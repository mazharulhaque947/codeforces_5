#include<bits/stdc++.h>
using namespace std;

int main()
{
     int a[1000][5],i,j,k,m,n,t,l,r,q,u,v;

     cin>>t;
     while(t--){
        m=5;
        cin>>n;
        for(i=0;i<n;i++)
        {

            for(j=0;j<m;j++){cin>>a[i][j]; }

        }
        k=0;

        for(i=0;i<m;i++){
            for(j=i+1;j<m;j++){

                l=r=q=0;
                for(u=0;u<n;u++){

                    if(a[u][i]==0&&a[u][j]==0){ break; }
                    else if(a[u][i]==1&&a[u][j]==1){ q++; }
                    else if(a[u][i]==1){l++;}
                    else{ r++; }
                }
               //  cout<<i<<" "<<j<<" "<<l<<" "<<r<<" "<<q<<"\n";
                 if(l+r+q>=n){

                    if(l>n/2||r>n/2){  }
                    else{ k=1; }

                 }
                if(k==1){break;}
            }
             if(k==1){break;}
        }



        if(k==1){ cout<<"YES\n"; }
        else{ cout<<"NO\n"; }

     }


    return 0;
}
