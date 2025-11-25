#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a,b;
    bool u;
    int i,j,k,l,n;
    cin>>a;
    cin>>b;
    n=a.length();
    u= true;
    for(i=0;i<n;i++){ if(a[i]<b[i]){ u=false; break; } }
    if(u==true){ cout<<b<<"\n"; }
    else{ cout<<"-1\n"; }
    return 0;
}
