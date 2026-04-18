#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,k,l,j,m,n,t,o,p;
    string q;
    cin>>t;
    while(t--)
    {   cin>>n;
        cin>>q;
        a[0]=0;
        a[1]=0;

        k=0;
        l=0;
        m=0;

        for(i=0;i<n;i++){

            if(q[i]==q[k]){ m++; }
            else{ a[l]=m; m=1; l++; k=i; }
            if( i==n-1 ){ a[l]=m; m=1; l++; }

        }
       o=p=0;
       k=0;
       for(i=0;i<l;i+=2){ k=k+a[i]; if(a[i]>o){o=a[i];} }
        for(i=1;i<l;i+=2){ if(a[i]>p){p=a[i];} }
       cout<<max( o*o,max(p*p,k*(n-k)) )<<"\n";

    }

    return 0;
}
