
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,i,j,k,l,m,t;
    cin>>t;
    while(t--)
    {
       cin>>n;
       m=sqrt(n);
       k=0;
       for(i=1;i<=m;i++){if(n%i==0){ k=i; }}
       l=n/k;
       cout<<k<<" "<<k*(l-1)<<"\n";

    }


    return 0;
}
