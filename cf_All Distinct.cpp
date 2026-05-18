#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[100],i,j,k,l,m,n,t,o,p,b[10000];
    cin>>t;

    while(t--)
    {
        cin>>n;
        for(i=0;i<10000;i++){b[i]=0;}
        for(i=0;i<n;i++){ cin>>a[i]; b[a[i]-1]++;}

        k=0;
        m=0;

        for(i=0;i<10000;i++){ if(b[i]>0){ k=k+1; m=m+(b[i]-1)%2; } }
        cout<<k-m%2<<"\n";

    }

    return 0;
}
