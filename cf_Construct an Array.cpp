#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[500],i,j,k,l,m,n,o,p,t;

    cin>>t;

    while(t--)
    {

        cin>>n;

        a[0]=1;
        l=1;

        o=-1;
        p=2;
        while(l<n){

            if(o!=-1&&p==o){  }
            else{ a[l]=p; o=a[l-1]+p; l++; }
            p++;
        }

        for(i=0;i<l;i++){ cout<<a[i]<<" ";} cout<<"\n";
    }

    return 0;
}
