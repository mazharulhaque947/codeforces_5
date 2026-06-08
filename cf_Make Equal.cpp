//#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int a[100],i,j,k,l,m,n,o,p,t;

    cin>>t;

    while(t--)
    {

        cin>>n;
        o=0;
        for(i=0;i<n;i++){ cin>>a[i]; o+=a[i]; }
        o=o/n;

        l=0;
        k=1;
        for(i=0;i<n;i++){ if(a[i]>o){ l+=a[i]-o; }else{  m=o-a[i];  if(m<=l){ l=l-m; }else{ k=0; break; }  } }

        if(k==1){ cout<<"YES\n"; }
        else{ cout<<"NO\n"; }
    }

    return 0;


}
