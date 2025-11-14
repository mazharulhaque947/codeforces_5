#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[101];
    int t,i,j,k,m,n,l,b[1000],c[100],d[4]={'m','e','o','w'};
    cin>>t;
    while(t--)
    {
        cin>>n;
        cin>>a;

        k=0;
        l=0;
        for(i=0;i<n;i++){j=a[i]; if(j<97){j+=32;} b[i]=j;

         if(b[i]==b[k]){  }
        else{  c[l]=b[k]; k=i;l++; }
        if(i==n-1){ c[l]=b[k];l++; }
          }

        if(l!=4){cout<<"NO\n"; }
        else if( c[0]!=d[0]||c[1]!=d[1]||c[2]!=d[2]||c[3]!=d[3]   ){cout<<"NO\n"; }
        else{cout<<"YES\n";  }

    }

    return 0;
}
