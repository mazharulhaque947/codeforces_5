


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],i,j,k,l,m,n,o,p,t;

    cin>>t;

    while(t--)
    {

        cin>>n>>k;

       m=k/2;
    p=0;
       if(k%2){ p=1; }

       if(  (m)*7+p*11>=n ){  cout<<m+p<<"\n"; }
       else{


        o=n- (m)*7+p*11;
        l=o/15;

        if(l*15!=o){l++;}  cout<<m+p+l<<"\n";

       }

    }

    return 0;

}
