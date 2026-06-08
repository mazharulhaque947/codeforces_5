#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,o,p,t;
    cin>>t;
    while(t--)
    {

        cin>>n;

        o=0;

        while(  45-( o*(o+1) )/2>n ){o++;}

        cout<<45-(( o*(o+1) )/2)<<" ";
        for(i=o+1;i<=9;i++){ cout<<i<<" "; }
        cout<<"\n";
    }

    return 0;
}
