#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,k,l,m,n,o,p,t;

    cin>>t;

    while(t--)
    {

        cin>>n;

        p=o=0;

        for(i=0;i<n;i++){ cin>>a[i];  p=p+a[i]; if(a[i]%2==0){o=o+a[i];} }

        if(o>p-o){ cout<<"YES\n"; }
        else{ cout<<"NO\n"; }

    }

    return 0;
}

