#include<bits/stdc++.h>
#define int long long
using namespace std;

int gg(int a,int b){

  int c;
  c=1;
  while(a>0){

    c=b%a;
    b=a;
    a=c;

  }

   return b;
}

int32_t main()
{

    int a,c,b,i,j,t,o,p,n,m;
    cin>>t;
    while(t--){

        cin>>n>>a>>b;
        //cout<<gg(a,b)<<"\n";
        p=(a)*(b/gg(b,a));
        //cout<<p<<" p\n";
        m=n/p;
        //cout<<m<<" m\n";
        a=n/a;
        //cout<<a<<" a\n";
        b=n/b;
        //cout<<b<<" b\n";
        a=a-m;
        b=b-m;

        o=(2*(n-a+1)+(a-1))*a;
        o=o/2;
        //cout<<o<<" o\n";
        c=(b*(b+1))/2;
        //cout<<c<<" c\n";
        o=o-c;
        cout<<o<<"\n";

    }

    return 0;
}
