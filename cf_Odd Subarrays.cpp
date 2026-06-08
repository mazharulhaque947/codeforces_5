#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,k,l,o,p,t,n,m;

    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++){ cin>>a[i]; }
        k=0; l=0;
        for(i=1;i<n;i++){ if(a[i]>a[k]){k=i;} else{ l++; k=i+1; i++; } }
         cout<<l<<"\n";
    }

    return 0;
}
