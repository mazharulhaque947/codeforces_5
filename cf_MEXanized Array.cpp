#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,m,n,l,p,o,t;

    cin>>t;

    while(t--)
    {

        cin>>n>>k>>m;

        if(n<k||m<k-1){  cout<<-1<<"\n"; }
        else{

            for(i=0;i<k;i++){cout<<i<<" ";} l=m; if(k==m){ l--; } for(i=0;i<n-k;i++){ cout<<l<<"\n"; } cout<<"\n";

        }


    }

    return 0;
}
