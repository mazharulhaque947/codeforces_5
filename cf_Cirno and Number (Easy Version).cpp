#include<bits/stdc++.h>
using namespace std;
long long pp(int a)
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

long long nn(long long a[100][20],long long  c[2],long long  i,long long l)
{
    int j,k,m,o;
    o=0;

    for(j=0;j<l;j++){o=o*10+c[ a[i][j] ];  }
    return o;
}
int main()
{
    long long a[100][20],i,j,k,l,m,n,o,p,t,b,c[2];

    cin>>t;
    while(t--)
    {
        cin>>b>>n;
        m=100;
        k=15;

        for(i=0;i<m;i++){ for(j=0;j<k;j++){ a[i][j]=0; } }
        for(i=0;i<m;i++){ o=i; l=0; while(o>0){ a[i][l]=o%2; o/=2; l++; } }
       // for(i=0;i<m;i++){ for(j=0;j<k;j++){ cout<<a[i][j]<<""; } cout<<"\n"; }

        for(i=0;i<n;i++){cin>>c[i];}
        //  cout<<nn(a,c,4,3)<<"\n";
        if(a==0){ cout<<min(c[0],c[1])<<"\n"; }
        else{

           l=log10(b)+1;

          p=b-c[0];
          if(p<0){p*=-1;}

          for(i=0;i<3;i++){

            for(j=0;j<pp(l-1+i);j++){
                o=b-nn(a,c,j,l-1+i);
                       if(o<0){o*=-1;}
                if(p>o){ p=o; }

            }

          }
          cout<<p<<"\n";

        }


    }

    return 0;
}
