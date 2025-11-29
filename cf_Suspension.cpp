
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    cin>>t;
    while(t--)
    {
        cin>>m>>k>>l;

        k=k/2;
        k=k+l;
        if(m<k){k=m;}
        cout<<k<<"\n";


    }

    return 0;
}
