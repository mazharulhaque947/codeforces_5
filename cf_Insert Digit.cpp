#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,o,p,t;
    string q;
    cin>>t;

    while(t--){

        cin>>n>>m;

        cin>>q;
        for(i=0;i<n;i++){  if(q[i]-48>=m){ cout<<q[i]; } else{ break;} }
        cout<<m<<"\n";
        for(;i<n;i++){   cout<<q[i];  }
        cout<<"\n";

    }

    return 0;
}
