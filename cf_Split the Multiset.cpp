#include<bits/stdc++.h>

using namespace std;

int main(){
int t,i,k,m,n,o,p;

cin>>t;

while(t--){
    cin>>n>>p;
    if(n==1){ cout<<0<<"\n";}
    else if(p==2){ cout<<n-1<<"\n"; }
    else{


        o=n/(p-1);
        o++;
        m=0;
        if(n%(p-1)<=1){ m=1; }
        cout<<o-m<<"\n";
    }

}


return 0;}
