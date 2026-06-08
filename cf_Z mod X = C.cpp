#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,l,m,o,p;

    cin>>t;

    while(t--)
    {

        cin>>m>>o>>p;
        k=p/o;
        k++;
        m+=o*k;

        cout<<m<<" "<<o<<" "<<p<<"\n";

    }

    return 0;
}
