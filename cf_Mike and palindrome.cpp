#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    int i,j,k,l,m,n,o,p,t;
    cin>>a;
    n=a.size();

    m=n/2;

    o=0;
    for(i=0;i<m;i++){ if(a[i]!=a[n-1-i]){ o++; } }

    if(o==1){cout<<"YES\n";}
    else if(o==0&&n%2==1){ cout<<"YES\n"; }
    else{ cout<<"NO\n"; }
    return 0;
}
