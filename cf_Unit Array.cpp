

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],i,j,k,l,m,n,o,p,t;

    cin>>t;

    while(t--)
    {

        cin>>n;
           o=0;
           p=n/2;
        for(i=0;i<n;i++){ cin>>a[i]; if(a[i]<0){ o++; } }

       if(o>p){ m=o-p;  if(p%2){m++;} cout<<m<<"\n"; }
       else{ m=0;if(o%2){m++;} cout<<m<<"\n";}
    }

    return 0;

}
