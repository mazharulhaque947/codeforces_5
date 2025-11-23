#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    int i,n,m,k,l,z,e,r,o,nn;
    cin>>n;
    cin>>a;
    z=e=r=o=nn=0;
    for(i=0;i<n;i++){
        if(a[i]=='z'){z++;}
        else if( a[i]=='e' ){e++;}
        else if( a[i]=='r' ){ r++; }
        else if(a[i]=='o'){ o++; }
        else{ nn++; }
    }
    z=min(z,r);
    nn=nn;
    o=min(o,e);
    l=o;

    for(i=0;i<min(l,nn);i++){ cout<<"1 "; }
    if(l>nn){l=l-nn;}
    else{l=0;}
     for(i=0;i<min(l,z);i++){ cout<<"0 "; }


    return 0;
}
