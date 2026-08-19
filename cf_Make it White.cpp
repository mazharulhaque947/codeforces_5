#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,t,k,l,n;
    string s;
    cin>>t;

    while(t--)
    {


       cin>>n;
       cin>>s;

       k=l=-1;

        for(i=0;i<n;i++){  if(s[i]=='B'){ l=i; if(k==-1){k=i;} } }

        if(k==-1){cout<<0<<"\n";}
        else{ cout<<l-k+1<<"\n"; }

    }


    return 0;
}
