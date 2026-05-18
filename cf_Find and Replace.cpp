#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[26],b[26],i,j,k,l,m,n,o,p,t;
    string q;
    cin>>t;

    while(t--)
    {
        for(i=0;i<26;i++){ a[i]=b[i]=0; }

        cin>>n;
         cin>>q;
        //for(i=0;i<n;i++){ cin>>q; }

        for(i=0;i<n;i+=2){ a[q[i]-97]=1; }
        for(i=1;i<n;i+=2){ b[q[i]-97]=1; }
        p=1;
        for(i=0;i<26;i++){ if(a[i]==1&&b[i]==1){ p=0; } }

        if(p){ cout<<"YES\n"; }
        else { cout<<"NO\n"; }
    }

    return 0;
}
