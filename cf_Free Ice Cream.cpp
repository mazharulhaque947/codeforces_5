#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,k,l,m,n;
    char b;

    cin>>n>>m;
    l=0;
    for(i=0;i<n;i++){ cin>>b>>k;  if(b=='-'){ if(m>=k){ m-=k; } else{ l++; } } else{ m+=k; } }
    cout<<m<<" "<<l<<"\n";

    return 0;
}
