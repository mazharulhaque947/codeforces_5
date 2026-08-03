#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],i,j,l,k,t,n;

    cin>>t;

    while(t--)
    {

        cin>>n;
        l=0;
        for(i=0;i<n;i++){ cin>>a[i]; if(i<n-1){ if(a[i]>a[l]){l=i;} } }
        cout<<a[n-1]+a[l]<<"\n";
    }

    return 0;
}
