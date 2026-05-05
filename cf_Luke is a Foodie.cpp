#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,k,l,m,n,o,p,t,u,v;

    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        for(i=0;i<n;i++){cin>>a[i];}
        o=a[0]+m;
        p=a[0]-m;

        k=0;

        for(i=0;i<n;i++){

           if(o<a[i]-m|| p>a[i]+m){ o=a[i]+m; p=a[i]-m; k++; }
           else{  o=min(a[i]+m,o); p=max(a[i]-m,p);  }
        }

        cout<<k<<"\n";
    }

    return 0;
}
