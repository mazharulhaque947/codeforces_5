#include<bits/stdc++.h>
using namespace std;
int qq(int a[],int i, int n)
{
   int r;

   r=a[i+n-1];
   if(i>0){r=r-a[i-1];}

   return r;
}
int main()
{
    int r[200],b[200],p[200],q[200],i,j,k,l,m,n,t,u,v,o;
    string a;
    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>a;
        u=v=l=o=0;
        k=-1;
        for(i=0;i<n;i++){

            if(a[i]!='W'){if(k==-1){ k=i; } o++;}
            else{ if(k!=-1){  p[l]=k; q[l]=o; l++; } k=-1; o=0; }

            if(a[i]=='R'){ u++; }
            else if(a[i]=='B'){ v++; }
            r[i]=u;
            b[i]=v;


        }

        u=1;

        for(i=0;i<l;i++){  if( qq(r,p[i],q[i])==0 || qq(b,p[i],q[i])==0 ){u=0; break;}  }

        if(u==1){cout<<"YES\n";}
        else{cout<<"NO\n";}

    }

    return 0;
}


