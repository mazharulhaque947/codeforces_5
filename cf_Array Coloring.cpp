#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,j,k,t,a[1000];

   cin>>t;

   while(t--)
   {
       cin>>n;
       k=0;
       for(i=0;i<n;i++){cin>>a[i];k=k+a[i]%2;}
       if(k%2==0){cout<<"YES\n";}
       else{ cout<<"NO\n"; }

   }
    return 0;
}

