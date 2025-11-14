#include<bits/stdc++.h>

using namespace  std;

void m()
{
    string a;

    int i,j,k,l,m,n;

    cin>>a;
    k=0;
    n=a.length();
    l=n;
    m=count(a.begin(),a.end(),'1');

    if(m==0){ cout<<0<<"\n"; }
    else{

        for(i=0;i<n;i++){ if(a[i]=='1'){ k=i; break;} }
        for(i=n-1;i>=0;i--){ if(a[i]=='1'){ l=i+1; break;} }
        m=count(a.begin()+k,a.begin()+l,'0');
        cout<<m<<"\n";

    }



}
int main()
{
    int t;
    cin>>t;
    while(t--){

        m();
    }

    return 0;
}
