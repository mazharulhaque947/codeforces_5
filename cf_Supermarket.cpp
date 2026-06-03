#include<bits/stdc++.h>
#define int long long
using namespace std;
int gg(int a,int b)
{

    if(b%a==0){ return a; }
    else{  return gg(b%a,a);  }

}
int lc(int a, int b)
{

    int c;
    c=a*b;
    c=c/gg(a,b);
    return c;

}
int main()
{
    int n,m,i,j,k,l,o,p,t,a[500],b[500];

   // cin>>t;

   // while(t--)
    {
        cin>>n>>m;
        l=1;
        for(i=0;i<n;i++){

            cin>>a[i]>>b[i];
            l=lc(l,b[i]);

        }

        k=0;

        for(i=0;i<n;i++){

            if( a[i]*(l/b[i]) < a[k]*(l/b[k])  ){ k=i; }

        }

        double x,y;
        x=a[k];
        y=b[k];
        x=x*m;
        x=x/y;

        //cout<<x<<"\n";
        printf("%.6lf\n",x);


    }

    return 0;
}
