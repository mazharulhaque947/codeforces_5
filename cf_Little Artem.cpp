#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,j,t;

    cin>>t;

    while(t--)
    {
        cin>>a>>b;
        cout<<"W";
         for(j=1;j<b;j++){ cout<<"B"; }  cout<<"\n";
        for(i=1;i<a;i++){
            for(j=0;j<b;j++){ cout<<"B"; }
            cout<<"\n";
        }


    }

    return 0;
}
