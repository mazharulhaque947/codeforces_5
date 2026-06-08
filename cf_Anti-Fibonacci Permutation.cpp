#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[50],i,j,k,l,p,o,t,m,n;

    cin>>t;

    while(t--)
    {

        cin>>n;
        for(i=0;i<n;i++){ a[i]=n-i; cout<<a[i]<<" "; }
        cout<<"\n";
        for(i=0;i<n-1;i++){

            for(j=0;j<n;j++){

                if(j==i){  cout<<a[j+1]<<" "<<a[j]<<" "; }
                else if(j==i+1){}
                else{ cout<<a[j]<<" "; }

            }

            cout<<"\n";
        }

    }

    return 0;
}
