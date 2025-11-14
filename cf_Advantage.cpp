#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,k,l,u,n,a[200],b[200],t;
    map<int,int>m;

    cin>>t;
    while(t--)
    {

        cin>>n;
        k=0;
        for(i=0;i<n;i++){cin>>a[i]; b[i]=a[i]; m[a[i]]++; if(a[i]>a[k]){k=i;} }
        sort(b,b+n);
        u=n;

        for(i=n-1;i>=0;i--){ if(b[i]!=a[k]){u=i; break;} }

        l=0;
        if(m[a[k]]>1){l=1;}
        for(i=0;i<n;i++){
            if(a[i]==a[k]){if(l==1){cout<<0<<" ";} else{ cout<<a[i]-b[u]<<" "; }}
            else{ cout<<a[i]-a[k]<<" "; }

        }
cout<<"\n";

    }

    return 0;
}
