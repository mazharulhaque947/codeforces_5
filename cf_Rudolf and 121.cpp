#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],u,j,k,l,m,n,i,o,p,t;
    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++){cin>>a[i];}

        k=1;

        for(i=0;i<n-2;i++){  if(a[i+1]<2*a[i]||a[2+i]<a[i]){k=0; break;}
                             else{ a[i+1]-=a[i]*2; a[i+2]-=a[i]; }
                          }

           if(k==0||a[n-1]+a[n-2]>0){cout<<"NO\n";}
           else{
            cout<<"YES\n";

           }




    }

    return 0;
}
