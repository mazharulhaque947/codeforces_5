#include<bits/stdc++.h>

using namespace std;

int main()
{
    char a[100],b[100];

    int c[126],i,k,j,l,d[126];
    for(i=0;i<126;i++){ c[i]=d[i]=0; }
    scanf(" %[^\n]",a);
     scanf(" %[^\n]",b);

     for(i=0;i<strlen(a);i++){ c[ a[i] ]++; }

     for(i=0;i<strlen(a);i++){ d[ b[i] ]++; }
     k=1;
     for(i=65;i<=90;i++){ if( c[i]<d[i] ){ k=0; break; } }
     for(i=97;i<=122;i++){ if( c[i]<d[i] ){ k=0; break; } }
     if(k){cout<<"YES\n";}
     else{  cout<<"NO\n"; }
    return 0;
}
