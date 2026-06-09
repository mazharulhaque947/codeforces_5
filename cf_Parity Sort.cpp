#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],b[100],i,j,k,l,n,m,t;

    cin>>t;

    while(t--)
    {

        cin>>n;

        for(i=0;i<n;i++){ cin>>a[i]; b[i]=a[i]; }
        sort(b,b+n);
        k=1;

        for(i=0;i<n;i++){ if(a[i]%2!=b[i]%2){k=0; break;} }
        if(k==1){ cout<<"YES\n";}
        else{  cout<<"NO\n"; }
    }

    return 0;
}
