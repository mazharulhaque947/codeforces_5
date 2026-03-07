#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[200],b[200],c[200],k,l,m,n,o,p,i,j,t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        o=p=0;
        for(i=0;i<n;i++){ cin>>a[i]; o=o+a[i]; }
        for(i=0;i<n;i++){ cin>>b[i]; p=p+b[i]; }
        l=0;
        for(i=0;i<n;i++){ if(a[i]!=b[i]){ c[l]=i%2; l++; } }

        if(l==0){

            if(o%2==p%2){ cout<<"TIE\n"; }
            else if(o%2==1){ cout<<"AJISAI\n"; }
            else{ cout<<"MAI\n"; }
        }
        else{

             if(o%2==p%2){ cout<<"TIE\n"; }
             else if(c[l-1]==0){ cout<<"AJISAI\n";  }
             else{ cout<<"MAI\n"; }



        }


    }

    return 0;
}
