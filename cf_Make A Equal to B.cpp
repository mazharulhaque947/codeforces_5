#include<bits/stdc++.h>
using namespace std;
int maain()
{
    int a[100],b[100],i,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        k=l=m=0;
        for(i=0;i<n;i++){ cin>>a[i]; k=k+a[i]; }
        for(i=0;i<n;i++){ cin>>b[i]; l=l+b[i]; }
        for(i=0;i<n;i++){ if(a[i]!=b[i]){m++;} }
        k=k-l;
        if(k<0){k=k*-1;}
        if(m>k){ k++; }
        cout<<k<<"\n";
    }
    return 0;
}
