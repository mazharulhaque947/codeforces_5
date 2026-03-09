
#include<bits/stdc++.h>
using namespace std;


void bb(int a[],int n,int s)
{
    int i,k,j,m,l;
    m=n;
    for(i=0;i<s;i++){ a[i]=0; }
    l=0;
    while(m>0){
        a[l]=m%2;
        m=m/2;
        l++;
    }

}

bool ok(int b[],int a[],int m,int p)
{
    bool y=true;
     int c[100],i,j,k,l,o,t,q;
     bb(a,p,m);
     //for(i=0;i<m;i++){ cout<<a[i]<<" "; } cout<<"\n";
     for(i=0;i<m;i++){ c[i]=b[i]; }
     //for(i=0;i<m;i++){ cout<<c[i]<<" "; } cout<<"\n";

     for(i=m-1;i>=0;i--){
        o=a[i];
        for(j=i;j>=0;j--){

               if(i==j){if( c[i]>=1 && a[i]==1){ o=0; } }
               else{
                o=o*2;

                if(a[j]==1){
                    if(o<=c[j]-1){ c[j]=c[j]-o; o=0; }
                    else{ o=o-c[j]+1; c[j]=1;   }
                }
                else{
                     if(o<=c[j]){ c[j]=c[j]-o; o=0; }
                    else{ o=o-c[j]; c[j]=0;   }

                }


               }

             if(o==0){break;}


        }

        if(o>0){ y=false ; break; }

     }



    return  y;
}

int main()
{
    int a[100],b[100],c[100],d[100],i,j,o,p,k,l,m,n,t;
    //cin>>t;
   // while(t--)
//{
       m=30;
       for(i=0;i<m;i++){ b[i]=0; }

       cin>>n;
       for(i=0;i<n;i++){

         cin>>o>>p;
         if(o==1){ b[p]++; }
         else{

            if( ok( b,a,m,p  ) ){ cout<<"YES\n"; }
            else{  cout<<"NO\n"; }

         }

       }




    //}
    return 0;
}

