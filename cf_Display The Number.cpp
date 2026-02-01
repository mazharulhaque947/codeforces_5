#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,i,j,t,a[100];

    cin>>t;
    while(t--){

    cin>>n;

    if(n%2==1){ cout<<7; n=n-3; }
    m=n/2;
    for(i=0;i<m;i++){cout<<1;} cout<<"\n";

    }

    return 0;
}

