#include<bits/stdc++.h>
using namespace std;

const long long m = 1e9+7;

long long mpow(long long a, long long b)
{

    long long r=1;
    a=a%m;
    while(b>0){

        if(b%2==1){  r=( a*r)%m; }
        a=(a*a)%m;
        b=b/2;
    }

    return r;

}
long long mmul(long long a, long long b){

    long long c;
    c= (a*b)%m;
    return c;
}

long long modin(long long a){// if mod is prime

     long long c;
     c=(mpow(a,m-2))%m;
     return c;

}
long long mdiv(long long a, long long b)// if mod is prime
{

    long long c;
    c=(a*modin(b))%m;

    return c;

}
long long mpl(long long a, long long b){

    long long c;
    c=(a+b)%m;
    return c;

}
long long msub(long long a, long long b){

    long long c;
    c=(a-b+m)%m;
    return c;
}

int main()
{

    long long n,m,i,j;
    cin>>n;
    m=mpow(2,n);
    m=mdiv(  mmul( m, mpl( m,1 ) )  ,2 );

    cout<<m<<"\n";

    return 0;
}
