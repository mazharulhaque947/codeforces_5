#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np,i,j,o,a[3];

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    k=k*l;
    c=c*d;
    k=k/nl;
    c=c/np;
    a[0]=k;
    a[1]=c;
    a[2]=p;
    sort(a,a+3);


    cout<<a[0]/n;

    return 0;
}
