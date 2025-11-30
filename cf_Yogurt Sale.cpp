#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,o,k,l,m,n,j;
    cin>>t;
    while(t--)
    {
        o=0;
        cin>>n>>k>>l;
        if(k*2<l){ l=k*2;  }
        if(n%2==1){  o=o+k; }
        m=n/2;
        o=o+m*l;
        cout<<o<<"\n";


    }

    return 0;
}
