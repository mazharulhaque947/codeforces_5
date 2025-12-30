#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main()
{

    int a,b,c,i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        c=a/b;
        if(b==1){ cout<<"NO\n"; }
        else{  cout<<"YES\n"<<a<<" "<<a*(b-0)<<" "<<a*b+a<<"\n"; }

    }

    return 0;
}
