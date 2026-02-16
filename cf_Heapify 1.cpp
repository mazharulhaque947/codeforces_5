
/*
  local code shoes no
  codeforces says yes
  or 48

2 5 21 4 11 20 15 3 32 22 25 1 9 7 26

46 6 35 34 33 40 42 29 28 8 12 45 43 23 24

38 31 41 16 37 18 47 17 19 39 27 36 44 48 10

30 13 14 test case

*/

#include<bits/stdc++.h>
# define int long long
using namespace std;

int pp(int a,int b)
{

    int r;
    r=1;
    while(b>0){

       // if(b%2==1){ r=r*a; }
       // b=b/2;
       // a=a*a;
       r=r*a;
       b--;

    }
    return r;

}

int32_t main()
{
    int a[200],c[200],i,j,k,n,m,t,p,o,u,v,q;
    cin>>t;
    while(t--){
        cin>>n;
        for(i=0;i<n;i++){ c[i]=0; }
        k=1;
        for(i=0;i<n;i++){cin>>a[i]; }

        m=n/2;
        //m++;
        q=n-1;
        if(n%2==0){q--;}
        cout<<n<<" "<<m<<"\n";

        while(m<=q){ cout<<q<<" "<<a[q]<<"...\n";
         if(a[q]!=q+1){k=0; break;} q-=2;  }
        m=n/2;
        m++;
         u=v=0;
        for(;u<m;){
            cout<<u<<"u ";
            o=0;
            p=0;
            v=u;
            if(v+1>=m){break;}
            while(c[v]==1){cout<<v<<"v ";
            if(v+1>=n){break;}
            v++;}
            u=v+1;
            if(v+1>=m){break;}
            while( v+1 <=n){c[v]=1; o++;p=p+a[v]; cout<<o<<"o "<<v<<"v "<<p<<"p ";
             v=2*v+1; }
            cout<<"\n";
          if(o!=0){ if( p!=u*(pp(2,o)-1) ){ k=0; break; }}

        }

        if(k==1){cout<<"YES\n";}
        else{cout<<"NO\n";}

    }

    return 0;
}


