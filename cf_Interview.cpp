#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,n,m,t;
    cin>>n;
    l=k=0;
    for(i=0;i<n;i++){ cin>>m; l=l|m;}
    for(i=0;i<n;i++){ cin>>m; k=k|m;}
    cout<<l+k<<"\n";
    return 0;
}
