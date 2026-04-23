#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++){ cin>>a[i]; }

        sort(a,a+n);
        cout<<a[n-1]+a[n-2]<<"\n";
    }

    return 0;
}
