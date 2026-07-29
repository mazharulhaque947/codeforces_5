#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],b[100],c[100],i,j,k,l,m,n,t,o,p;

    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++){ cin>>a[i]; }
         k=0;l=n-1;
        for(i=0;i<n-1;i++){ if(a[i]>a[k]){k=i;}; b[i]=a[k];    }
        for(i=n-1;i>=1;i--){ if(a[i]<a[l]){l=i;} c[i]=a[l];  }

        m=0;
        for(i=0;i<n-1;i++){ if(b[i]>c[i+1]){ m=1; break;} }

        if(m==1){cout<<"YES\n";}
        else{ cout<<"NO\n"; }

    }

    return 0;
}
