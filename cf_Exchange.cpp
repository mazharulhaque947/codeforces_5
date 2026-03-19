#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t,k,l,j,m,i,o,p;
    cin>>t;
    while(t--)
    {
        cin>>n>>o>>p;
        if(p<o){ cout<<1<<"\n"; }
        else{  m=n/o; if(m*o!=n){m++;} cout<<m<<"\n"; }

    }
    return 0;
}
