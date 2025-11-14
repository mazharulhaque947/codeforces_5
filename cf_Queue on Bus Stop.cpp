#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,j,k,m,n,o,p,b[100];

    cin>>n>>m;
    k=0;
    for(i=0;i<100;i++){ b[i]=0;}
    for(i=0;i<n;i++){ cin>>a[i] ; if(b[k]+a[i]<=m){ b[k]+=a[i]; } else{ k++; b[k]+=a[i];  } }
    cout<<k+1<<"\n";
    return 0;
}
