#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,m,l;
    cin>>t;
    while(t--)
    {
        cin>>n;
        m=n/14;
        l=m;
        m=n-m*14;
        if(m>0&&m<=6&&l>0){ cout<<"YES\n"; }
        else{ cout<<"NO\n"; }

    }

    return 0;
}
