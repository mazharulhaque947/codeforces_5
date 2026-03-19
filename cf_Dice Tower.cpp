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
        m=n-m*14;
        if(m<=6){ cout<<"YES\n"; }
        else{ cout<<"NO\n"; }

    }

    return 0;
}
