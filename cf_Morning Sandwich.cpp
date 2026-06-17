#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i,j,k,l,m,n,o,p;

    cin>>t;

    while(t--)
    {

        cin>>k>>l>>m;

        if(k>=1+l+m){  cout<<2*(l+m)+1<<"\n"; }
        else{   cout<<2*k-1<<"\n"; }

    }

    return 0;
}
