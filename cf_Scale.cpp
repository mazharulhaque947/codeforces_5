#include<bits/stdc++.h>
using namespace std;

int main()
{
    string a[100];
    int i,j,k,l,m,n,o,p,t;

    cin>>t;

    while(t--)
    {

        cin>>n>>k;
        o=n/k;
        for(i=0;i<n;i++){cin>>a[i];}
        for(i=0;i<o;i++){
            for(j=0;j<o;j++){

               // if(a[i*k][j*k]=='')
               cout<<a[i*k][j*k];
            }
            cout<<"\n";
        }


    }


    return 0;
}
