#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i,k,j,l,m,o,t;

    cin>>t;

    while(t--)
    {
        cin>>a;

        o=10;
        m=a%10;
        l=0;
        while(a>0){ if(a%10<o){o=a%10;} a=a/10;l++;}
        if(l<=2){ cout<<m<<"\n"; }
        else{ cout<<o<<"\n"; }


    }



    return 0;
}
