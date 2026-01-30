#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,k,l,m,n,x,t;

    cin>>n>>k>>x;

    m=0;
    for(i=0;i<n;i++){  cin>>a[i];  if(i>=n-k){m=m+min(x,a[i]);}else{m=m+a[i];} }
    cout<<m<<"\n";
    return 0;
}
