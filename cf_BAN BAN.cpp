#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,m,i,j,t;
    cin>>t;

    while(t--)
    {
        cin>>n;

        m=n/2;
        m+=n%2;
        cout<<m<<"\n";
        for(i=0;i<m;i++){ cout<<(1+i*3)<<" "<<(n-1)*3+2<<"\n"; }



    }

    return 0;
}
