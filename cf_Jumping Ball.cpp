#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,n,m,o,p,t,i,j;
    string q;
   // cin>>t;
    //while(t--)
    //{
        cin>>n;
        cin>>q;
        o=p=0;
        for(i=0;i<n;i++){ if(q[i]=='<'){o++;}else {break; }}

         for(i=n-1;i>=0;i--){ if(q[i]=='>'){p++;}else {break; }}
        cout<<o+p<<"\n";
   // }

    return 0;
}
