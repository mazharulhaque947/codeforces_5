#include<<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,k,m,n,t;

    cin>>a>>b;
    m=1;
    for(i=1;i<=min(a,b),i++){m=m*i;}
    cout<<m<<"\n";
    return 0;
}
