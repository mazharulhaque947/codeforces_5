#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],b[200],c[200],d[200],i,j,k,l,m,n,t,x,y,z,o,p,s;
    cin>>t;

    while(t--)
    {
        cin>>n>>m;;
        for(i=0;i<n;i++){ cin>>a[i]; }
        sort(a,a+n);
        k=0;
        for(i=0;i<n;i++){ k+=a[i]; b[i]=k; }


        if(  (a[n-1]+1)*n-b[n-1]<=m ){

            l=(m+b[n-1])/n;

            cout<<l<<"\n";
        }
        else{
            l=0;
           for(i=0;i<n-1;i++){

                 y=x=a[i+1]*(i+1)-b[i];
                 if(a[i+1]-a[i]>1){ y=(a[i]+1)*(i+1)-b[i]; }


                  if(y>m){ l=i-1; break; }
                  else if( x>=m ){break;}
           }

               l=(m+b[l])/(l+1);
               cout<<l<<"\n";
        }

    }

    return 0;
}
