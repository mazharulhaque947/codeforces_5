#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,i,j,k,l,m,n;
    cin>>t;
      string a[100];
      k=0;
      l=0;
    for(i=0;i<t;i++)
    {


         k++;
        cin>>a[i];

        m=0;
        for(j=0;j<k-1;j++){

            if(a[j].compare(a[i])==0){ l=1; }
        }

         if(l==1){ cout<<"YES\n"; }
        else{ cout<<"NO\n";  }
        l=0;

    }

    return 0;
}
