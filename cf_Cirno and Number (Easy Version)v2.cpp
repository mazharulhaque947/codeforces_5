#include<bits/stdc++.h>
using namespace std;
long long a[300][20];
long long pp(long long a)
{
    long long c,d;
    d=2;
    c=1;
    while(a>0)
    {

        if(a%2==1){c=c*d;}
        d*=d;
        a/=2;

    }

    return c;
}

long long nn(long long a[300][20],long long  c[2],long long  i,long long l)
{
    long long j,k,m,o;
    o=0;

    for(j=0;j<l;j++){o=o*10+c[ a[i][l-1-j] ];  }
    return o;
}
int main()
{   //ios_base::sync_with_stdio(false);cin.tie(nullptr);
    long long i,j,k,l,m,n,o,p,t,b,c[2],z,x,y,xx,yy,zz;
      m=300;
        k=19;

        for(i=0;i<m;i++){ for(j=0;j<k;j++){ a[i][j]=0; } }
        for(i=0;i<m;i++){ o=i; l=0; while(o>0){ a[i][l]=o%2; o/=2; l++; } }
       // for(i=0;i<m;i++){ for(j=0;j<k;j++){ cout<<a[i][j]<<""; } cout<<"\n"; }

    cin>>t;
    while(t--)
    {


        cin>>b>>n;

        for(i=0;i<n;i++){cin>>c[i];}
        //  cout<<nn(a,c,4,3)<<"\n";
        if(b==0){ cout<<min(c[0],c[1])<<"\n"; }
        else{

           l=log10(b)+1;

          p=b-c[0];
          if(p<0){p*=-1;}
         m=0;
         if(l!=1){ z=0; y=0; while(y<l-1){z=z*10+max(c[0],c[1]);y++;}

          o=b-z;
                       if(o<0){o*=-1;}
                if(p>o){ p=o; }


       //  cout<<z<<"===\n";

          }
          z=min(c[0],c[1]);
          if(min(c[0],c[1])==0){ z=max(c[0],c[1]);  }
           y=0; while(y<l){z=z*10+min(c[0],c[1]);y++;}

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
          y=pp(l)-1;
          z=0;
          while(x<=y)
          {

              z=(x+y)/2;
 //cout<<z<<"\n";
            //  cout<<nn(a,c,z,l)<<"\n";
              if(b<nn(a,c,z,l)){ y=z-1; }
              else{ x=z+1; }


          }

           xx=0;
          yy=pp(l)-1;
          zz=0;
          while(xx<=yy)
          {

              zz=(xx+yy)/2;
 //cout<<z<<"\n";
            //  cout<<nn(a,c,z,l)<<"\n";
              if(b>=nn(a,c,zz,l)){ yy=zz-1; }
              else{ xx=zz+1; }


          }

          for(i=zz;i<=z;i++){  if( nn(a,c,i,l)<=b){  z=i; }


                o=b-nn(a,c,i,l);
                       if(o<0){o*=-1;}
                if(p>o){ p=o; }


           }
         // cout<<z<<" "<<nn(a,c,z,l)<<"\n";

         if( z+1<pp(l) ){  o=b-nn(a,c,z+1,l);
                       if(o<0){o*=-1;}
                if(p>o){ p=o; }  }
          cout<<p<<"\n";

        }


    }

    return 0;
}
