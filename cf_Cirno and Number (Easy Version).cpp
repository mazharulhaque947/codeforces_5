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

    for(j=0;j<l;j++){o=o*10+c[ a[i][j] ];  }
    return o;
}
int main()
{   //ios_base::sync_with_stdio(false);cin.tie(nullptr);
    long long i,j,k,l,m,n,o,p,t,b,c[2];
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

          for(i=0;i<3;i++){

            for(j=0;j<pp(l-1+i);j++){
                o=b-nn(a,c,j,l-1+i); cout<<nn(a,c,j,l-1+i)<<"\n";
                       if(o<0){o*=-1;}
                if(p>o){ p=o; }

            }

          }
          cout<<p<<"\n";

        }


    }

    return 0;
}
