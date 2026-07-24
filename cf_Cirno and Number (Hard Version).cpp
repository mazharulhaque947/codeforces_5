
#include<bits/stdc++.h>
using namespace std;

long long pp(long long a,long long b)
{
    long long c,d;
    d=b;
    c=1;
    while(a>0)
    {

        if(a%2==1){c=c*d;}
        d*=d;
        a/=2;

    }

    return c;
}
void tb(long long a[],long long x,long long b, long long l)
{

    long long i,j,k,o,d[20];
    k=20;
    for(i=0;i<20;i++){ d[i]=0; }
    o=0;

   // while(x>0){ o=10*o+x%b; x/=b; } x=o;
    i=0;
   //  cout<<x<<" rev \n";
    while(x>0){ d[i]=x%b; x=x/b; i++; }

    for(i=0;i<l;i++){a[i]=d[l-1-i]; }
}
long long nn(long long a[],long long  c[10],long long i,long long l)
{
    long long j,k,m,o;
    o=0;

    for(j=0;j<l;j++){ o=o*10+c[ a[j] ];  }
    return o;
}
int main()
{   //ios_base::sync_with_stdio(false);cin.tie(nullptr);
    long long i,j,k,l,m,n,o,p,t,b,c[10],z,x,y,xx,yy,zz,ll,a[20];


    cin>>t;
    while(t--)
    {


        cin>>b>>n;

        for(i=0;i<n;i++){cin>>c[i];}


        //  cout<<nn(a,c,4,3)<<"\n";
        if(b==0){ cout<<c[0]<<"\n"; }
        else{

           l=log10(b)+1;

          p=b-c[0];
          if(p<0){p*=-1;}
         m=0;
         if(l!=1){

                z=0; y=0; while(y<l-1){z=z*10+c[n-1];y++;}
                    // cout<<z<<"\n";
              o=b-z;
              if(o<0){o*=-1;}
                if(p>o){ p=o; }


               //  cout<<z<<"===\n";

          }
          z=c[0];
          if(c[0]==0){ if(n==1){ z=0; } else{z=c[1];}  }
           y=0; while(y<l){z=z*10+c[0];y++;}
            //  cout<<z<<"big\n";
                o=b-z;
                if(o<0){o*=-1;}
                if(p>o){ p=o; }


         //cout<<z<<"===\n";

         /*
            for(j=0;j<pp(l);j++){
                o=b-nn(a,c,j,l);
                       if(o<0){o*=-1;}
                if(p>o){ p=o; }

            }
          */

          x=0;
          y=pp(l,n)-1;
        //  cout<<"hihrt "<<y<<"\n";
          z=0;
          ll=0;
          while(x<=y)
          {
              if(ll>60){break ;}ll++;
              z=(y+x)/2;
              tb(a,z,n,l);

            // cout<<z<<"\n";
           //  for(i=0;i<10;i++){ cout<<a[i]<<" "; }
            nn(a,c,z,l);
              //  cout<<nn(a,c,z,l)<<"upper\n";

              if(b<=nn(a,c,z,l)){ y=z; }
              else{ x=z+1; }


          }

           xx=0;
          yy=pp(l,n)-1;
          zz=0;
          ll=0;

         while(xx<=yy)
          {
                if(ll>60){break ;}ll++;
              zz=(yy+xx)/2;

             tb(a,zz,n,l);
             nn(a,c,zz,l);
                         // cout<<zz<<"\n";
              //cout<<nn(a,c,zz,l)<<"lower \n";
              if(b>=nn(a,c,zz,l)){ xx=zz; }
              else{ yy=zz-1; }


          }
         // if(zz>0){zz--;}
        // cout<<z<<"   hhh   "<<zz<<"\n";
          for(i=zz;i<=z;i++){  tb(a,i,n,l); if( nn(a,c,i,l)<=b){   }

                tb(a,i,n,l);
               // cout<<nn(a,c,i,l)<<" ";
                o=b-nn(a,c,i,l);
                       if(o<0){o*=-1;}
                if(p>o){ p=o; }


           }
         // cout<<z<<" "<<nn(a,c,z,l)<<"\n";


          cout<<p<<"\n";

        }


    }

    return 0;
}
