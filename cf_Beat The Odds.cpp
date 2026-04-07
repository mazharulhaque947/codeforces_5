#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],i,j,k,m,n,o,p,l,t;

    cin>>t;
    while(t--)
    {
        cin>>n;
        o=p=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){o++;}
            else{ p++; }
        }
        cout<<n-(min(p,o))<<"\n";;

    }

    return 0;
}
