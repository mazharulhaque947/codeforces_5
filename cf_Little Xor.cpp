#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],b[100],i,j,l,k,m,n,t;

    cin>>n;
    m=0;
    for(i=0;i<n;i++){ cin>>a[i]; m=m^a[i]; b[i]=m; }
    l=0;
    for(i=0;i<n;i++){

        for(j=i;j<n;j++){

            k=0;
            k=b[j];
            if(i>0){ k=k^b[i-1]; }
            cout<<k<<"\n";
            if(k>l){l=k;}
        }

    }
    cout<<l<<"\n";

    return 0;
}
