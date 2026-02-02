

#include<bits/stdc++.h>
#define int long long

using namespace std;

int32_t main()
{
    int a,b,s,i,j,l,n;
    cin>>a>>b>>s;

    l=0;
    if(s%3==0){cout<<a^b;}
    else if(s%2==0){cout<<b;}
    else{cout<<a;}

    return 0;
}


