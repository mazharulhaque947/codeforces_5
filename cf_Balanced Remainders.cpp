#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],c[3],i,j,k,l,o,p,m,n,t,x,y;

    cin>>t;

    while(t--)
    {

        cin>>n;

        c[0]=c[1]=c[2]=0;

        for(i=0;i<n;i++){ cin>>a[i]; c[ a[i]%3 ]++; }

        m=n/3;
        o=-1;
        x=0;
        y=0;
        for(i=0;i<3;i++){ if(c[i]-m>0){ o=i; x++; }else if(c[i]-m==0){ y++; } }
      //   cout<<x<<y<<"\n";
        if(y==3){ cout<<"0\n"; }
        else if(x==1){

                k=0;
               for( i=1;i<3;i++ ){ k+= i*(m-c[(i+o)%3]) ; }
               cout<<k<<"\n";
        }
        else{
               k=0;

            if(c[(o+1)%3]-m>=0){

                k+=2*(c[o]-m);
                k+=c[(o+1)%3]-m;
                 cout<<k<<"\n";
            }
            else{


               k+=(c[o]-m);
             //  cout<<"===="<<c[o]<<" "<<c[o-1]<<"\n";
                k+=(c[(o-1)%3]-m)*2;
                 cout<<k<<"\n";

            }


        }

    }

    return 0;
}
