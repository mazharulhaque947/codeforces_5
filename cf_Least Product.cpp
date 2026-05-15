#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],z[100],zz,p[100],pp,o[100],oo,i,j,k,l,m,n,t;

    cin>>t;
    while(t--)
    {
        cin>>n;
        zz=pp=oo=0;
        for(i=0;i<n;i++){ cin>>a[i]; if(a[i]==0){z[zz]=i+1; zz++;}
                                     else if(a[i]>0){ p[pp]=i+1; pp++; }
                                     else{  o[oo]=i+1; oo++; } }

        if(zz==0){
              if(oo%2==0){ cout<<1<<"\n"; if(pp>0){cout<<p[0]<<" "<<0<<"\n"; }
                              else{ cout<<o[0]<<" "<<0<<"\n";  }
               }

               else if(oo%2==1){  cout<<"0\n";  }
               else{

                cout<<1<<"\n"<<p[0]<<" "<<0<<"\n";

               }

        }
        else{

            cout<<"0\n";

        }
    }

    return 0;
}
