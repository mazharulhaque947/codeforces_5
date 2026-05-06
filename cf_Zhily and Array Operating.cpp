#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,k,l,m,n,t,p;

    cin>>t;

    while(t--)
    {
        cin>>n;
        p=0;
        for(i=0;i<n;i++){cin>>a[i];}
        for(i=n-1;i>=1;i--){if(a[i]>=0&&a[i-1]+a[i]>0){ a[i-1]=a[i]+a[i-1]; } }
        for(i=0;i<n;i++){ if(a[i]>0){p++;} }
        cout<<p<<"\n";
    }

    return 0;
}
