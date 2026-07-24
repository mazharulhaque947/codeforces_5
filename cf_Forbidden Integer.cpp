#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,k,l,j,m,n,t;
    cin>>t;

    while(t--)
    {

        cin>>n>>k>>m;
        if(m==k&&m==1){ cout<<"NO\n"; }
       else if(m!=1){ cout<<"YES\n"; cout<<n<<"\n"; for(i=0;i<n;i++){ cout<<"1 "; } cout<<"\n"; }
        else if(m==1&&n%2==1&&k<=2){ cout<<"NO\n"; }
        else if(n==1&&m==1){  cout<<"NO\n"; }
        else{

            j=n/2;

             cout<<"YES\n"; cout<<j<<"\n"; cout<<2+n%2<<" "; for(i=1;i<j;i++){ cout<<"2 "; } cout<<"\n";
        }

    }

    return 0;
}
