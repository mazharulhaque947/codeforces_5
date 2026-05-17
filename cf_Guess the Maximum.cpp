#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4000],i,j,k,l,m,n,o,t,p;

    o=1e9;
    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++){ cin>>a[i]; if(i!=0){ p=max(a[i],a[i-1])-1; if(p<o){o=p;} } }
        cout<<o<<"\n";

    }

    return 0;
}
