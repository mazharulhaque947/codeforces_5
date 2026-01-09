#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],b[100],j,i,h,k,l,m,n,t;

    cin>>n;

    for(i=0;i<n;i++){  cin>>a[i]; b[i]=15*a[i] ;}

    for(i=0;i<n;i++){
        t=0;
        for(j=0;j<a[i];j++){ cin>>m; t+=m*5;   }
        b[i]=b[i]+t;
    }
    sort(b,b+n);
    cout<<b[0]<<"\n";

    return 0;
}
