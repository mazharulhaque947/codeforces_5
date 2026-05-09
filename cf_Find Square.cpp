#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a[115];
    int b[10000],c[10000],i,j,k,l,m,n,t;




        cin>>n>>m;
        l=0;

        for(i=0;i<n;i++){ cin>>a[i]; }

         for(i=0;i<n;i++){

            for(j=0;j<m;j++){ if(a[i][j]=='B'){ b[l]=i; c[l]=j; l++; } }
         }
         cout<<l<<'\n';
         j=(b[l-1]+b[0]+1)/2;
         k=(c[l-1]+c[0]+1)/2;
         cout<<j+1<<" "<<k+1<<"\n";


    return 0;
}
