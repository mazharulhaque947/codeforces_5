#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],c[200],i,j,h,k,l,m,n,t,v;
    cin>>t;
    while(t--)
    {

        cin>>n;

        for(i=0;i<n;i++){cin>>a[i];c[i]=a[i];}
         sort(a,a+n);
        v=a[0];
        m=0;

        for(i=1;i<n;i++){
                m=m+a[i-1];
                if(a[i]-m>v){v=a[i]-m;}
                a[i]-=a[i-1];


              // if(a[i]>v){v=a[i];}
               // c[i]=a[i]-a[i-1]; a[i]-=a[i-1]; if(a[i]>v){v=a[i];}
       // if(a[i]-a[i-1]>v){v=a[i]-a[i-1]; a[i]-=a[i-1];}else{break;}


                // m=m+a[i-1]; if(a[i]-m>v){v=a[i]-m;}


         }
         sort(c,c+n);

        cout<<v<<"\n";

    }


    return 0;
}
