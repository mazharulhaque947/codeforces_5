#include<bits/stdc++.h>
#define int long long
using namespace std;
int s(int n)
{

    int m;
    m=n*(n+1);
    m=m/2;
    return m;

}

int32_t main()
{
    int n,m,k,l,a,b,i,j,t;
    cin>>t;
    while(t--)
    {

        cin>>n>>a>>b;

        if(b<=a){ cout<<a*n<<"\n"; }
        else{


            k=b-a+1;
            k=min(n,k);
            l=n-k;
            //cout<<l<<" "<<k<<" ";
            cout<<( s(b)-s(  max( b-k,(long long)0 ) )+l*a )<<"\n";

        }


    }


    return 0;
}
