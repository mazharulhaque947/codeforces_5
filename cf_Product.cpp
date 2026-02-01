
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,k,i,j;
    cin>>a>>b>>c;
    k=1;
    for(i=a;i<=b;i++){k=k%c; j=i%c; k=k*j; k=k%c;}
    cout<<k;
    return 0;
}

