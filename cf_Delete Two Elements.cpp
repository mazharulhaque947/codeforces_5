#include<bits/stdc++.h>
using namespace std;
int bb(int a[],int n,int t)
{
    int r,l,k,m;
    l=0;
    k=n-1;
    r=-1;
    while(k>=l){

        m=l+(k-l)/2;
  //  cout<<m<<"\n";
        if(a[m]==t){r=m; break;}
        else if(a[m]>t){k=m-1;}
        else{ l=m+1; }

    }


    return r;
}
int gg(int a,int b){ return a*b; }
int ss(int a){  return (a*(a+1))/2;  }
int main()
{
    int a[100],b[100],c[100],l,k,o,p,m,n,i,j,t,u;

    cin>>t;
    while(t--)
    {
       cin>>n;
       o=0;
       for(i=0;i<n;i++){ cin>>a[i]; o+=a[i]; }

       sort(a,a+n);
       m=0;
       p=0;
       l=0;
       for(i=0;i<n;i++){
           if(a[i]==a[p]){m++;}
           else{ b[l]=a[p]; c[l]=m; m=1; l++; p=i; }
           if(i==n-1){   b[l]=a[p]; c[l]=m; m=1; l++; p=i;  }

       }

       //for(i=0;i<l;i++){ cout<<b[i]<<" "<<c[i]<<"\n"; }
       m=o*2;
       m=m/n;
       if(m*n!=2*o){ cout<<"0\n"; }
       else{
         k=u=0;

          for(i=0;i<l;i++){ if(b[i]<=m){ if(2*b[i]==m){ k+=ss(c[i]-1); }else{ //cout<<m-b[i]<<"\n";
          if(p=bb(b,l,m-b[i]),p!=-1){ u+=gg(c[i],c[p]); }  } } }
          cout<<k+(u/2)<<"\n";


       }

    }

    return 0;
}
