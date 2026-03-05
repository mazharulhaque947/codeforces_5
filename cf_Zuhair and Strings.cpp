#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c[26][200],i,j,k,m,n,l,o,p,t;
    string a;

    cin>>t;
    while(t--)
    {
       cin>>n>>k;
       cin>>a;
       for(i=0;i<26;i++){c[i][0]=0;}
       m=0;
       l=0;

       for(i=0;i<n;i++)
       {
           if(a[i]==a[l]){ m++; }
           else{  c[a[l]-97][0]++; c[a[l]-97][c[a[l]-97][0]]=m; m=1;l=i;   }
           if(i==n-1){ c[a[l]-97][0]++; c[a[l]-97][c[a[l]-97][0]]=m; m=1;l=i;   }


       }

       p=0;

       for(i=0;i<26;i++){

          o=0;
          for(j=1;j<=c[i][0];j++){

            o=o+c[i][j]/k;

          }
          if(o>p){p=o;}

       }

        cout<<p<<"\n";
    }
    return 0;
}
