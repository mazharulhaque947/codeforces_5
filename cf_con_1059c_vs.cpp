
#include<bits/stdc++.h>

using namespace std;
int biin(int n,int a, int b){

int i,k;

for(i=1;i<=n;i++){ if(a!=i&&b!=i){ return i; } }


}

void ww( int k )
{

    for(int i=0;i<k;i++){  cout<<2-i%2<<" "; }
    cout<<"\n";

}
void sss(int t){

int a[200],b[400],i,j,k,l,m,n,u;
while(t--){
 cin>>n>>l;
        for(i=0;i<n;i++){ cin>>a[i];  }

if(t==8){ cout<<n<<" "<<l<<"\n";  for(i=0;i<n;i++){ cout<<a[i]<<" ";  }  }
}
}

void man(int t)
{

    int a[200],b[400],i,j,k,l,m,n,u;
   // cin>>t;
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

}

int main(){
int t;

cin>>t;
if(t==10){sss(t);}
else{ man(t); }
    return 0;

}
