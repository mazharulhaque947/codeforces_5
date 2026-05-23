#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,k,l,m,n,t;

    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++){ cin>>a[i]; }
        k=0;

        for(i=0;i<n;i++){ l=1; for(j=1;j<n;j++){ if(a[(j+i)%n]<a[(j-1+i)%n]  ){ l=0; break; }  } k=l; if(k==1){ break;} }
        if(k==1){ cout<<"YES\n"; }
        else{ cout<<"NO\n"; }
    }

    return 0;
}
