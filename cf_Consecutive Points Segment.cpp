#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],k,l,i,m,n,t;
    cin>>t;
    while(t--)
    {
        k=0;
        cin>>n;
        for(i=0;i<n;i++){ cin>>a[i]; }

        for(i=1;i<n;i++){ k=k+a[i]-a[i-1]-1; }

        if(k>2){ cout<<"NO\n"; }
        else{ cout<<'Y'<<'E'<<'S'<<'\n'; }

    }

    return 0;
}
