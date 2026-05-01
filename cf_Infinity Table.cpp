#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,j,k,i,o,p,t;

    cin>>t;

    while(t--)
    {
        cin>>n;
        k=0;

        while( true ){ k++; if(k*k>=n){break;} }

    o=n-(k-1)*(k-1);

    if(o<=k){ cout<<o<<" "<<k<<"\n"; }
    else{cout<<k<<" "<<2*k+1-o+1<<"\n";  }

    }

    return 0;
}
