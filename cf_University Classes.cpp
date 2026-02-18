#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10][7],i,j,k,l,m,n;
    string b[100];
    cin>>n;
    for(i=0;i<n;i++){ cin>>b[i]; }
    k=0;
    for(i=0;i<7;i++){
        m=0;
        for(j=0;j<n;j++){

            m=m+b[j][i]-48;
        }
        if(m>k){k=m;}
    }
    cout<<k<<"\n";
    return 0;
}
