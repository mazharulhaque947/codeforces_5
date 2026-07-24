#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],b[200],i,o,k,l,j,m,n,t;

    cin>>t;

    while(t--)
    {

        cin>>n;

        for(i=0;i<n;i++){ cin>>a[i]; }

        l=1;
        m=0;
        j=n-1;
        for(  ; true ; ){
           if(j<0){break;}
           if( a[j]>=l ){ b[m]=j+1; m++; l++; }
           else{j--;}


        }
        k=1;
        for(i=0;i<min(n,m);i++){ if(a[i]!=b[i]){k=0; break;} }

        if(k){cout<<"YES";}
        else{cout<<"NO";}
         cout<<"\n";


    }

    return 0;
}
