#include<bits/stdc++.h>

using namespace std;
int biin(int n,int a, int b){

int i,k;

for(i=k;i>0;i++){ if(a!=i&&b!=i){ return i; } }


}



int main()
{

    int a[200],b[200],i,j,k,l,m,n,t,u;
    cin>>t;
    while(t--)
    {
        cin>>n>>l;
        for(i=0;i<n;i++){ cin>>a[i];  }
        k=0;
        m=0;

        for(i=1;i<n;i++){

           if(a[i]==a[k]){ }
           else{ b[m]=a[k]; k=i; m++; }
          if(i==n-1){ b[m]=a[k]; m++; }


        }
        u=m;
        //for(i=0;i<m;i++){ cout<<b[i]<<" ";}
        if(n==2&&m==2){ ww(l); }
        else{

            if(m==1){
                 b[m]=biin(n,b[m-1],b[m-1]);
             cout<<b[m]<<" ";
            m++;
            for(;m<u+l;m++){ b[m]=biin(n,b[m-1],b[m-2]); cout<<b[m]<<" ";  }

            }
            else{

               for(;m<u+l;m++){ b[m]=biin(n,b[m-1],b[m-2]); cout<<b[m]<<" ";  }


            }


        }

      cout<<"\n";

    }

    return 0;

}
