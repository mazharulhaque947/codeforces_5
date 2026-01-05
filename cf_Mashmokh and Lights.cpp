#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,j,k,m,n,u;

    cin>>n>>m;
    for(i=0;i<n;i++){a[i]=-1;}
    while(m--){
        cin>>k;
        for(i=k-1;i<n;i++){if(a[i]==-1){a[i]=k;}}

    }
    for(i=0;i<n;i++){cout<<a[i]<<" ";}
    return 0;
}
