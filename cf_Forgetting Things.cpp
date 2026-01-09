#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a,b,i,j,k,m,n;
    cin>>a>>b;
    if(a==b){

        cout<<a<<1<<" "<<b<<2<<"\n";
    }
    else if(a==9&&b==1){ cout<<"9 10\n"; }
    else if(a+1==b){ cout<<a<<" "<<b<<"\n"; }
    else{ cout<<"-1\n"; }
    return 0;
}
