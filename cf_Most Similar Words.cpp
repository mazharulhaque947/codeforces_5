#include<bits/stdc++.h>
using namespace std;

int main()
{
    string q[100];
    int i,j,k,l,m,n,o,r,p,t;

    cin>>t;

    while(t--)
    {

        cin>>n>>m;

        for(i=0;i<n;i++){ cin>>q[i]; }

        k=0;

        for(i=0;i<n-1;i++){
            for(j=i+1;j<n;j++){

                for(o=0;o<m;o++){

                      r=q[i][o]-q[j][o];
                      if(r<0){r=r*-1;}
                      k+=r;

                }
            }

        }

        cout<<k<<"\n";

    }



    return 0;
}
