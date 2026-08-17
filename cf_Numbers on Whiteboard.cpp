#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,o,p,t;

    cin>>t;

    while(t--)
    {

        cin>>n;
        k=n;
        cout<<2<<"\n";
        for(i=n-1;i>0;i--){

            cout<<i<<" "<<k<<"\n";
            k+=i;
            k++;
            k/=2;

        }


    }

    return 0;
}
