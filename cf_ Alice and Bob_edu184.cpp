#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,m,n,o,p,t,a[300];
    cin>>t;

    while(t--)
    {
        cin>>n>>k;
        m=l=0;
        for(i=0;i<n;i++){ cin>>a[i]; if(a[i]==k){l++;} else if(a[i]<k){ m++; } }
        if( l+m<n-m ){ cout<<k+1<<"\n"; }
        else if( l+n-m<m ){cout<<k-1<<"\n";  }
        else{ cout<<k-1<<"\n"; }

    }


    return 0;
}
