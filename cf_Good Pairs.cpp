#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1000],i,j,k,l,n,t;
    cin>>t;

    while(t--)
    {
        cin>>n;
        l=k=0;
        for(i=0;i<n;i++){ cin>>a[i]; if(a[i]>a[l]){ l=i; }  if(a[i]<a[k]){ k=i; } }

        cout<<k+1<<" "<<l+1<<"\n";
    }

    return 0;
}
