#include<bits/stdc++.h>

using namespace std;

int main()
{

    long long t,n,m,k,l;

    cin>>t;
    while(t--)
    {

        cin>>n;
        k=1;
      //  n=n<<1;
       // cout<<n<<"\n";
        while( 1 ){  if( n&(long long)1==1 ){ break;} n=n>>1;//cout<<n<<"\n";
         }
        if(n==1){k=0;}
        if(k==1){ cout<<"YES\n"; }
        else{  cout<<"NO\n";  }
    }


}
