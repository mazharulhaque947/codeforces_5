#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[100],i,j,k,l,m,t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){ cin>>a[i]; }
        sort(a,a+n);
        k=0;
        m=a[n-1]-a[0];
        if(m<0){m=m*-1;}
        k=k+m;
         m=a[n-1]-a[1];
        if(m<0){m=m*-1;}
        k=k+m;
         m=a[n-2]-a[1];
        if(m<0){m=m*-1;}
        k=k+m;
         m=a[n-2]-a[0];
        if(m<0){m=m*-1;}
        k=k+m;
        cout<<k<<"\n";
    }

    return 0;
}
