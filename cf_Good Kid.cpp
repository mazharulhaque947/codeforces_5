#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10],i,k,l,m,n,o,t;
    cin>>t;
    while(t--)
    {

        cin>>n;
        m=0;
        for(i=0;i<n;i++){ cin>>a[i]; if(a[i]<a[m]){m=i;} }

        a[m]++;

        k=1;
        for(i=0;i<n;i++){k=k*a[i];}
        cout<<k<<"\n";
    }

    return 0;
}
