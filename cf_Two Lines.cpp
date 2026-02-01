#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,g,h,i,j;
    cin>>a>>b>>c>>d;
    cin>>g>>h>>i>>j;

    if( (d-b)*(i-g) == (j-h)*(c-a)){cout<<"YES\n";}
    else{ cout<<"NO\n"; }

    return 0;
}
