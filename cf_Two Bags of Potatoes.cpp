#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z,n,o,i,j,t,k;

    cin>>y>>k>>n;

    i=(y+1)/k;
    if(i*k!=y+1){i++;}
    j=n/k;

    if(j<i){ cout<<-1<<"\n"; }
    else{

        for(;i<=j;i++){ cout<<i*k-y<<" "; }
        cout<<"\n";
    }


    return 0;
}
