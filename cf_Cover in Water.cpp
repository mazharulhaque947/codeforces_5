#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,j,k,l,m,n,t,o,p;
    string q;

    cin>>t;

    while(t--)
    {
        cin>>n;
        cin>>q;

        o=0;
        if(q[0]=='#'){o++;}

        p=l=m=0;

        for(i=0;i<n;i++){ if(q[i]==q[p]){m++;} else{ a[l]=m; m=1; p=i; l++; } if(i==n-1){ a[l]=m; l++; } }
        p=0;
        for(i=o;i<l;i+=2){ p+=a[i]; if(a[i]>=3){ o=-1; break; } }

        if(o==-1){ cout<<2<<"\n"; }
        else{ cout<<p<<"\n"; }

    }

    return 0;
}
