#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[500],b[500],c[500],d[500],r[500],i,j,k,m,n,t,l,o,x,y,p[500];
    cin>>t;
    while(t--)
    {
       m=20;
       for(i=0;i<m;i++){ a[i]=b[i]=0; }
       cin>>n;
       x=0;

       for(i=0;i<n;i++)
       {
           cin>>o;
           for(j=0;j<o;j++){ cin>>c[x+j]; b[c[x+j]-1]++; }
           d[i]=x;r[i]=x+o-1;
           x=x+o;


       }
       //for(i=0;i<r[n-1]+1;i++){ cout<<c[i]<<" "; } cout<<"\n";
       y=1;
        for(i=0;i<n;i++)
       {
           //  cout<<d[i]<<" "<<r[i]<<"\n";
           for(j=d[i];j<=r[i];j++){  a[c[j]-1]++; }
          l=0;
          //for(j=0;j<m;j++){ cout<<a[j]<<" "; } cout<<"\n";
          //for(j=0;j<m;j++){ cout<<b[j]<<" "; } cout<<"\n";
         // for(j=0;j<m;j++){ if([j]>0&&a[j]-b[j]==0 ){ a[j]++; p[i]=j+1;l=1; break; } }

          for(j=d[i];j<=r[i];j++){ if(a[c[j]-1]-b[c[j]-1]==0 ){ a[c[j]-1]++; p[i]=c[j];l=1; break; } }
          if(l==0){ y=0; break; }


       }
       if(y==0){cout<<"-1\n";}
       else{for(i=0;i<n;i++){cout<<p[i]<<" ";}cout<<"\n";}



    }
    return 0;
}
