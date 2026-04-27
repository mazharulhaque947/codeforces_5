#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,j,k,l,m,n,t,o,p,q[100];


    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){cin>>q[i];}


        sort(q,q+n);
        p=l=m=0;

        for(i=0;i<n;i++){ if(q[i]==q[p]){m++;} else{ a[l]=m; m=1; p=i; l++; } if(i==n-1){ a[l]=m; l++; } }
       sort(a,a+l);

       p=n/2;


        if(l==1){ cout<<"YES\n"; }
        else if(l==2&&a[0]==p){ cout<<"YES\n"; }
        else{ cout<<"NO\n"; }

    }

    return 0;
}

