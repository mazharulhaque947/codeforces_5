#include<bits/stdc++.h>

using namespace std;

int main()
{
    string b;
    int i,j,k,l,m,n,o,p;
    cin>>n>>p;
    cin>>b;
    k=0;
    l=0;
    for(i=0;i<n;i++){if(b[i]=='.'){l=0;}  if(b[i]=='#'){l++;}k=max(k,l);  }
    if(p>k){ cout<<"YES\n"; }
    else{ cout<<"NO\n"; }
    return 0;
}
