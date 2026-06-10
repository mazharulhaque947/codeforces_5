#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[10]={6,2,5,5,4,5,6,3,7,6},i,j,k,l,m,n,o,p,t;

    cin>>m>>n;

    o=0;
    for(i=m;i<n;i++){
        k=i;
        while(k>0){
            p=k%10;
            o+=a[p];
            k=k/10;
        }


    }

    cout<<o<<"\n";

    return 0;
}
