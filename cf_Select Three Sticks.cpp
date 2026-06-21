#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[300],b[300],c[300],i,j,k,l,m,n,o,p,t,x[3],oo,pp;

    cin>>t;

    while(t--)
    {
       cin>>n;
       for(i=0;i<n;i++){ cin>>a[i]; }
       sort(a,a+n);
     /*  l=k=m=0;
       o=0;
       for(i=0;i<n;i++){

          if(a[i]==a[k]){m++;}
          else{ c[l]=m;b[l]=a[k]; k=i; if(m>=3){o=1;} l++; m=1; }
          if(i==n-1){ c[l]=m;b[l]=a[k]; if(m>=3){o=1;} l++; m=1;  }

       }

       if(o==1){ cout<<"0\n"; }
       else{
        oo=(b[l-1]-b[0])*2;
        for(i=0;i<l-1;i++){ if(c[i+0]==1){ if(c[i+1]==1){ pp=b[i+2]-b[i+1];pp+=b[i+1]-b[i+0]; if(oo>pp){oo=pp;} }
                           else{ pp=b[i+1]-b[i+0]; if(oo>pp){oo=pp;}  }  }


                          else{ if(c[i+1]==1){ pp=b[i+2]-b[i+1]; if(oo>pp){oo=pp;}   }
                          else{

                            pp=b[i+2]-b[i+1];
                             if(oo>pp){oo=pp;}
                            pp+=b[i+1]-b[i+0];
                            if(oo>pp){oo=pp;}

                          }

                            }



                          }

           cout<<oo<<"\n";


       }

       */
    oo=1e9;

    for(i=0;i<n-2;i++){ pp=a[i+2]-a[i+1]; pp+=a[i+1]-a[i]; if(oo>pp){ oo=pp;}  }

    cout<<oo<<"\n";
    }

    return 0;
}
