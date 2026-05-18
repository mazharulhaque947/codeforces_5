#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,n,m,o,i,j,t;
    cin>>t;
    while(t--)
    {
       cin>>n;
       m=n/3;
       o=n%3;

       if(o==0){cout<<m<<" "<<m<<"\n";}
       else if(o==1){ cout<<m+1<<" "<<m<<"\n"; }
       else{ cout<<m<<" "<<m+1<<"\n"; }


    }
    return 0;
}
