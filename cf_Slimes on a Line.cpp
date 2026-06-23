#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],i,j,k,l,m,n,t;

    cin>>t;

    while(t--)
    {
        cin>>n;
        k=m=0;
        for(i=0;i<n;i++){cin>>a[i];if(a[i]<a[k]){k=i;}if(a[i]>a[m]){m=i;}}
        m=a[m]-a[k];
        m=m/2+m%2;
        cout<<m<<"\n";

    }

    return 0;
}
