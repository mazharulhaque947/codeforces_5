#include<bits/stdc++.h>

using namespace std;
void pp(int n){ int m; m=n%10; n=n/10; if(n>0){  pp(n); } cout<<m<<" ";}
int main()
{

    int n,t;
    cin>>t;
    while(t--){
        cin>>n;
         pp(n);
         cout<<"\n";

    }

    //cout<<"\n";
    return 0;
}



