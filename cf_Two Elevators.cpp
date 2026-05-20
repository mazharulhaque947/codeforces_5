#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,v,m,n,c,t,d,e,f;

    cin>>t;

    while(t--)
    {

        cin>>a>>b>>c;

        if(b<c){  b=2*(c-b)+b; }

        if(a==b){cout<<"1\n";}
        else if(a<b){ cout<<"2\n"; }
        else{ cout<<"3\n"; }
    }

    return 0;
}
