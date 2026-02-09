
#include<bits/stdc++.h>
#define int long long
using namespace std;

int pp(int a,int b)
{

    int r=1;
    while(b>0){

        if(b%2==1){ r=r*a; }

        b/=2;
       a=a*a;
    }

  return r;
}

int ss(int n,int a)
{   int m=a*(pp(4,n)-1);
    m=m/3;
    return m;
    //return ( (n)*(2*a+2*(n-1)) )/2;
}
int oo(int n)
{
    int m;
    m=n/2;
    if(n%2==1){m++;}
    return m;
}
int ee(int n)
{

     int m;
    m=n/2;

    return m;

}
int32_t main()
{

    int a,n,m,b,i,j,t,o,p;
    cin>>t;
    while(t--){

    cin>>a>>b;


    p=0;
    j=0;
    while( true ){
        if( a>=ss( oo(p),1 )&& b>=ss(ee(p),2) || b>=ss( oo(p),1 )&& a>=ss(ee(p),2) ){
                  // cout<<ss( oo(p),1 )<<" "<<ss(ee(p),2)<<" "<<ss( oo(p),1 )<<" "<<ss(ee(p),2)<<"\n";
                    j=p; }
        else{break;}
        p++;
    }
    cout<<j<<"\n";
    }
    return 0;
}
