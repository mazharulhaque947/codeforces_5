#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[100],i,j,k,l,m,n,o;
    cin>>n;
    for(i=0;i<n;i++){

        cin>>a[i];

    }
    sort(a,a+n);
    o=n/2;
    k=0;
    for(i=0;i<o;i++)
    {

        k=k+a[2*i+1]-a[i*2];


    }
    cout<<k<<"\n";

    return 0;
}
