
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],b[100],c[100],d[100],i,j,o,p,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
       m=100;
       for(i=0;i<m;i++){ b[i]=0; }

       cin>>n;
       for(i=0;i<n;i++){ cin>>a[i]; if(a[i]>0){b[a[i]-1]++; } }

       l=0;
       o=-1;
       p=0;

       for(i=m-1;i>=0;i--){

           if(b[i]!=0){ if(o==-1){ o=i+1; p=b[i]; }
                else{

                   c[l]=o-i-1;
                   d[l]=p;
                   p=b[i];
                   o=i+1;
                   l++;
                }

             }

           if(i==0){    c[l]=o;
                   d[l]=p;
                   l++; }

       }
        for(i=1;i<l;i++){ d[i]=d[i]+d[i-1]; }
       for(i=0;i<l;i++){ cout<<c[i]<<" "<<d[i]<<"\n"; }

       o=0;
       for(i=0;i<l-1;i++){ o=o+c[i]*d[i]; }
       o=o+(c[l-1]-1)*(d[l-1]);
       o=n-o;
       if(o<=1){ cout<<d[l-1]<<"\n"; }
       else { cout<<d[l-1]-o+1<<"\n";  }



    }
    return 0;
}
