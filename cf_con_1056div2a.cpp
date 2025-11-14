
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,k,l,o,p,j,m,n,t;
    cin>>t;
    while(t--){
        cin>>n;
        k=1;
        m=0;
        while(n!=1||m!=1)
        {

            o=(n/2);
            p=m/2;
            n=n-o;
            m=m-p;
            m=m+o;

            k+=p+o;

        }


        cout<<k<<"\n";

    }


    return 0;
}
