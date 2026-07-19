#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,k,l,m,n,t;

    cin>>t;
    while(t--)
    {

        cin>>n;

        k=0;
        for(i=0;i<n;i++){  cin>>a[i];if(a[k]<a[i]){k=i;} }
        cout<<k+1<<"\n";

    }

    return 0;
}
