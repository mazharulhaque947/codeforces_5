#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int a[100],b[100],i,j,k,l,m,n,o,p,t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;

        for(i=0;i<k;i++){ cin>>a[i]; if(i>0){ b[i]=a[i]-a[i-1]; } }
        b[0]=a[0]/(n-k+1);
        b[0]=b[0]+a[0]%(n-k+1);
        o=1;

        for(i=1;i<k;i++){ if(b[i]<b[i-1]){  o=0; break;}  }

        if(o==1){ cout<<"YES\n"; }
        else{ cout<<"NO\n";  }

    }

    return 0;
}

