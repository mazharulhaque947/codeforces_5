#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s,i,j,k,l,m,n,t;

    cin>>t;

    while(t--)
    {

        cin>>n;

       s=0;
       m=0;
       for(i=2;i<=n;i++){  l=n/i; j=(l*(l+1))/2; j=j*i; if(j>s){s=j; m=i;} }
       cout<<m<<"\n";
    }


    return 0;
}

