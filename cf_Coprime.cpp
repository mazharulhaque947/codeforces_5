
#include<bits/stdc++.h>
using namespace std;
int gg(int a, int b)
{
    int c;

    c=1;

    while(a!=1)
    {

       c=b%a;
       b=a;
       a=c;

    }


    return b;
}
int main()
{
    int a[1000],b[200],c[200],i,j,k,l,m,n,o,p,t;
    cin>>t;
    while(t--)
    {  m=100;
        for(i=0;i<m;i++){a[i]=-1;}
       cin>>n;
       l=0;
       for(i=0;i<n;i++){cin>>b[i];if(a[b[i]-1]==-1){c[l]=b[i]-1;l++;}a[b[i]-1]=i;}
       k=-1;

       for(i=0;i<l;i++){cout<<c[i]<<" ";} cout<<"\n";

        for(i=0;i<l;i++){
                for(j=i;j<l;j++){  m=c[i]+1; o=c[j]+1;
                    if(m>o){swap(m,o);}
                    //if( (o==1&&m==1)|| o%m!=0){ if(k<a[m-1]+a[o-1]){k=a[m-1]+a[o-1];} }
                    if( gg(m,o)==1 ){ if(k<a[m-1]+a[o-1]){k=a[m-1]+a[o-1]+2;} }
                }
        }
       cout<<k<<"\n";

    }
    return 0;
}
