#include<bits/stdc++.h>
using namespace std;

int fac(int n){
   if(n==1){return 0;}
   else if(n==2){return 1;}
   else{return fac(n-1)+fac(n-2);}
}

int main()
{
    int n;

    cin>>n;
    cout<<fac(n);

    return 0;
}
