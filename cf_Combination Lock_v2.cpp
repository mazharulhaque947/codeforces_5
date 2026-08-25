#include<bits/stdc++.h>
using namespace std;

int main()
{

    int a[200],i,j,k,l,m,n,o,p,t;

    cin>>t;

    while(t--)
    {

        cin>>n;

        if(n%2==0){ cout<<"-1\n"; }
        else{


            m=n+1;
            m/=2;

            for(i=1;i<=n;i++){
                p=i-1;
                p/=2;
                if(i%2){    a[ (i-1-p)  ]=i;  }
                else{                  a[ m+p ] =i;  }


            }

 for(i=1;i<=n;i++){

                cout<<a[i-1]<<" ";

            }
        cout<<"\n";
        }




    }

    return 0;
}
