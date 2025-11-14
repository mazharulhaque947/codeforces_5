#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[50],b[50],i,j,k,n,m,t;

    cin>>n;
    k=0;
    for(i=0;i<n;i++){ cin>>a[i]; }
    sort(a,a+n);
     for(i=n-1;i>=0;i--){   k=k+a[i] ; b[i]=k; }

    m= k/2 + 1 + k%2;
     for(i=n-1;i>=0;i--){ if( b[i]>=m ){ k=n-1-i+1; break; }  }
    cout<<k<<"\n";
    return 0;
}
