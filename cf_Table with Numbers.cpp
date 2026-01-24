#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,j,k,l,m,n,h,t,u,v;
    cin>>t;
    while(t--){

        cin>>n>>h>>l;
        u=v=0;
        for(i=0;i<n;i++){cin>>a[i]; if(a[i]<=h){u++;} if(a[i]<=l){v++;} }
        if(v<u){swap(u,v);}
        v=v-u;
         m=min(u,v);
         u=u-m;
         u=u/2;

        cout<<m+u<<"\n";
    }
    return 0;
}
