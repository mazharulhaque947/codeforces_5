#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,k,j,m,n,t;
    cin>>n;
    m=100;
    for(i=0;i<m;i++){ a[i]=0; }
    for(i=0;i<n;i++){ cin>>k; a[k-1]++; }
    for(i=0;i<m;i++){ a[i]=a[i]/2; }
    k=0;
    for(i=0;i<m;i++){ k=k+a[i]; }
    cout<<k/2<<"\n";

    return 0;
}
