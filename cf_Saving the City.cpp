#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,j,k,m,n,o,p,l,t,b,c;
    string q;

    cin>>t;

    while(t--)
    {
        cin>>b>>c;

        cin>>q;
        n=q.size();
        o=2;
        if(q[0]=='1'){o=1;}

        m=l=p=0;

        for(i=0;i<n;i++){ if(q[i]==q[p]){m++;}else{ a[l]=m; m=1; p=i;l++; } if(i==n-1){ a[l]=m; l++;  } }
        if(l%2==1){ if(o==2){l--;} }
        else{ if(o==1){l--;}   }
       m=1;
        for(i=o;i<l;i+=2){ m++; }
        p=0;
        for(i=o;i<l;i+=2){ if(a[i]*c<((b))){ m--; p++;} }

        cout<<m*b+p*c<<"\n";

    }

    return 0;
}
