#include<bits/stdc++.h>
using namespace std;

int main()
{
    int o,z,zz,oo,i,j,k,l,n,m,t,a[200];

    cin>>t;

    while(t--)
    {

        cin>>n;
        o=z=-1;
        for(i=0;i<n;i++){cin>>a[i]; if(a[i]==0){ if(z==-1){ z=i; } zz=i; } else{   if(o==-1){ o=i; } oo=i;  } }
        if(o==-1){ cout<<"Bob\n"; }
        else if(z==-1){ cout<<"Alice\n"; }
        else if(  o<z||oo>zz ){  cout<<"Alice\n"; }
        else{ cout<<"Bob\n";  }
    }

    return 0;
}
