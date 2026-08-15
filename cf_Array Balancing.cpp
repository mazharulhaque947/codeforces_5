

#include<bits/stdc++.h>
using namespace std;
int pp(int a[25],int b[25],int n){

  int i,j,k,l;
  k=l=0;
  for(i=0;i<n-1;i++){
    k=a[i]-a[i+1];
    if(k<0){k*=-1;}
    l+=k;
     k=b[i]-b[i+1];
    if(k<0){k*=-1;}
    l+=k;

  }

  return l;

}
int main()
{
    int a[25],b[25],c[25],i,j,k,l,m,n,o,p,t,x,y,z;


    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){ cin>>b[i]; }
        for(i=0;i<n;i++){ cin>>c[i]; }
        a[0]=0;
        k=1;
        m=0;
        x=0;
        y=0;
        z=0;
        z=pp(b,c,n);


        while(true)
        {     // for(i=0;i<k;i++){   cout<<a[i]<<" ";} cout<<"\n";
            for(i=0;i<k;i++){   y=b[a[i]]; b[a[i]]=c[a[i]]; c[a[i]]=y;
           } //cout<<"\n";

          if(z>pp(b,c,n)){ z=pp(b,c,n); }

         for(i=0;i<k;i++){   y=b[a[i]]; b[a[i]]=c[a[i]]; c[a[i]]=y;
           }
            // this is the main part
           if(a[0]==n-k){k++; m=0; if(k==n+1){break;} for(i=0;i<k;i++){a[i]=i;} }

           else{

              if( a[k-1-m]==n-m-1){m++;}
              a[k-1-m]++;


           }

        }


     cout<<z<<"\n";
    }

    return 0;
}
