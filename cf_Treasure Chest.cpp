#include<bits/stdc++.h>
using namespace std;

int main()
{
    int  k,m,n,o,p,t;
    cin>>t;
    while(t--)
    {
        cin>>o>>p>>k;

        if(o+k>=p){ cout<<max(p,o)<<"\n"; }
        else{  m=p-(o+k); cout<<p+m<<"\n"; }

    }

    return 0;
}
