#include<bits/stdc++.h>
using namespace std;

int vv(string q){

   int a=0;
   a=26*26*(q[0]-97)+26*(q[1]-97)+(q[2]-97);
   cout<<a<<"\n";
   return a;
}

int main()
{
    int a[3][18000],i,j,k,l,m,n,o,p,t;

    string q;
    cin>>t;
    while(t--){
     for(i=0;i<18000;i++){ a[0][i]=a[1][i]=a[2][i]=0; }
     cin>>n;
     for(j=0;j<3;j++){
     for(i=0;i<n;i++){ cin>>q; a[j][vv(q)]=1;  }
     }

     for(j=0;j<3;j++){
        k=0;

        for(i=0;i<18000;i++){ if(a[j][i]==1){ k=k+2-((a[0][i]+a[1][i]+a[2][i])-a[j][i]); }  }
        cout<<k<<"\n";

     }
    }
    return 0;
}
