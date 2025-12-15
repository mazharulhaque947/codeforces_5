#include<bits/stdc++.h>

using namespace std;
int co( const void *a, const void *b){

   return *(int*)a-*(int*)b;
}
int main()
{
    int a[100],i,j,k,l,o,p,m,n,t;

    cin>>t;

    while(t--)
    {

        cin>>n;
        for(i=0;i<n;i++){ cin>>a[i]; }
        qsort(a,n,sizeof(int),co);
        // for(i=0;i<n;i++){ cout<<a[i]<<" "; }
        m=n/2;
        m--;
        m=m+n%2;
        o=0;
        for(i=m;i<n;i++){ if(a[i]==a[m]){o++; } }
        cout<<o<<"\n";

    }

    return 0;
}
