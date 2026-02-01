

#include<bits/stdc++.h>
#define int long long

using namespace std;

int32_t main()
{
    int a,b,s,i,j,l,n;
    cin>>a>>b>>s;

    l=0;
    if(s%3==0){l=a^b;}
    else if(s%2==0){l=b;}
    else{l=a;}
    cout<<l<<"\n";
    return 0;
}


