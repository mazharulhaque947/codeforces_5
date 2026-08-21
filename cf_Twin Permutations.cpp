#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[100],n,m,i,j,t;

    cin>>t;

    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++){ cin>>a[i];  }
          for(i=0;i<n;i++){   cout<<n+1-a[i]<<" "; }
        cout<<"\n";

    }

    return 0;
}
