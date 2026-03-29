#include<bits/stdc++.h>
using namespace std;
int gg(int a, int b)
{
    int c =1 ;
    while(a!=0){

        c=b%a;
        b=a;
        a=c;

    }

    return b;
}
int main()
{
    int i,k,l,m,n,t,a[200];
    cin>>t;
    while(t--)
    {
        cin>>n;

        for(i=0;i<n;i++){ cin>>a[i]; }
        for(i=0;i<n;i++){ cin>>a[i]; }
        k=0;
        k=a[0];
         for(i=1;i<n;i++){ k=gg(a[i],k); }
            l=0;
            if(k!=a[0]&&gg(a[0],a[1])==k){l++; a[0]=k;}

         for(i=1;i<n-1;i++){ if(gg(a[i-1],a[i])==gg(a[i],a[i+1])&&k==gg(a[i],a[i+1])&&k!=a[i]){l++; a[i]=k;}  }
          if((a[n-1]!=a[n-2])){l++;}
       cout<<l<<"\n";

    }

    return 0;
}



