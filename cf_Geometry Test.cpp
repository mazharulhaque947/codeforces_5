#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i,n,m,o,p,t,q[4];

       cin>>a>>b;
       if( 2*a>sqrt(2)*b ){ cout<<"Circle\n"; }
       else if(2*a<b ){ cout<<"Square\n"; }
       else{  cout<<"Complex\n"; }


    return 0;
}

