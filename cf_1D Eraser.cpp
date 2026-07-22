#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j,k,l,m,n,t;
    string q;
    cin>>t;

    while(t--)
    {
       cin>>n>>k;
       cin>>q;
       l=0;

       for(i=0;i<n;i++){

          if(q[i]=='B'){ i+=k-1; l++; }

       }

        cout<<l<<"\n";

    }

    return 0;
}
