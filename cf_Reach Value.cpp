#include<bits/stdc++.h>
using namespace std;

int mm(long long n,long long x){

    if(n>x){return 0;}
    else if(n==x){return 1;}

    if(mm(n*10,x)==1){return 1;}
    else if(mm(20*n,x)==1){return 1;}
    else{ return 0; }

}
int main()
{
    long long n,x,t;
    cin>>t;
    while(t--){
        cin>>x;
        if(mm((long long)1,x)==1){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }

    return 0;
}
