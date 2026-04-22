#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,j,k,l,n,t;
    cin>>t;

    while(t--)
    {
        cin>>a,b;

        k=sqrt( a*a + b*b );
        if(a==0&&b==0){ cout<<"0\n"; }
        else if(k*k==a*a+b*b){ cout<<"1\n"; }
        else{ cout<<"2\n"; }

    }

    return 0;
}

