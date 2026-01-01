#include<bits/stdc++.h>

using namespace std;

int main()

{
    int n,m,k,l,i,o;

    cin>>n;

    m=sqrt(n);

    k=n-m*m;
    l=k/m;

    if(l*m<k){l++;}
    if(l>4){l==4;}

    cout<<m*4+l*2<<"\n";

    return 0;
}
