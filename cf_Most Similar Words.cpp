#include<bits/stdc++.h>
using namespace std;

int main()
{
    string q[100];
    int i,j,k,l,m,n,o,p,t;

    cin>>t;

    while(t--)
    {

        cin>>n>>m;

        for(i=0;i<n;i++){ cin>>q[i]; }

        k=0;

        for(i=0;i<n;i++){
            for(j=i+1;j<n;j++){

                for(o=0;i<3;o++){

                      m=q[i][o]-q[j][o];
                      if(m<0){m=m*-1;}
                      k+=m;

                }
            }

        }

        cout<<k<<"\n";

    }



    return 0;
}
