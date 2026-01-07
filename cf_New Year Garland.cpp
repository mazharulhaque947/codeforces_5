#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{
    int a[3],i,j,k,m,n,t;

    cin>>t;

    while(t--)
    {

        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]+a[1]+1<a[2]){ cout<<"NO\n"; }
        else{ cout<<"YES\n";   }
    }

    return 0;
}
