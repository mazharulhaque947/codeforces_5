#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],l,i,j,k,n,m;
    cin>>n;
    k=0;
    for(i=0;i<n;i++){ cin>>a[i]; if(a[i]>a[k]){ k=i; } }
    l=0;
    m=0;
    for(i=0;i<n;i++){  if(a[i]==a[k]){ m++; if(l<m){l=m;}  } else{m=0; } }
    cout<<l<<"\n";
    return 0;
}
