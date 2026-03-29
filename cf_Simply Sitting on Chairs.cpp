#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,k,l,m,n,t,a[200];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){ cin>>a[i]; }
        k=0;
        for(i=0;i<n;i++){ if(i+1>=a[i]){k++;} }
        cout<<k<<"\n";

    }

    return 0;
}

