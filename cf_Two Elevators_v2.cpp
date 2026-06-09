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
         b--;
        if(a-1==b){cout<<"3\n";}
        else if(a-1<b){ cout<<"1\n"; }
        else{ cout<<"2\n"; }
    }

    return 0;
}
