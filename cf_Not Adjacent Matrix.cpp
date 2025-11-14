#include<bits/stdc++.h>

using namespace std;
void sol()
{
    int i,k,l,m,n,o,p,j;

    cin>>n;
    if(n<3){ cout<<"-1\n"; }
    else{
        l=1;
        for(i=0;i<n;i++){

            for(j=0;j<n;j++){
if(l>n*n){ l=2;}
                cout<<l<<" ";

            l+=2;


            }


            cout<<"\n";
        }

    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        sol();

    }

    return 0;
}
