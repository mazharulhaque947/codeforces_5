#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000],i,j,k,l,m,n,t;
    string q;

    cin>>t;

    while(t--)
    {

        cin>>q;
        n=q.size();
        k=l=m=0;

        for(i=0;i<n;i++){
            if(q[i]==q[k]){ m++; }
            else{ a[l]=m; m=1; l++; k=i; }
            if(i==n-1){  a[l]=m; m=1; l++; k=i; }

        }
        m=1;
        for(i=0;i<l;i++){ if(a[i]<=1){m=0; break;} }

        if(m==1){cout<<"YES\n"; }
        else{ cout<<"NO\n"; }

    }

    return 0;
}
