#include<bits/stdc++.h>
using namespace std;


int main()
{
    int a[100],i,j,t,m,n;
    string s;

    cin>>t;

    while(t--)
    {

        cin>>s;

        n=s.size();

        m=0;

        for(i=0;i<n;i++){  if(s[i]=='N'){m++;} }

        if(m==1){ cout<<"NO\n"; }
        else{ cout<<"YES\n"; }
    }


    return 0;
}
