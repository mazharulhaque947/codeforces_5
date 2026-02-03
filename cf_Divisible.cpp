#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long a,b,i,n,p,t,q[4];
   string m;

       cin>>m>>a;
       n=m.size();
       p=0;
       for(i=0;i<n;i++){ p=(p*10+m[i]-48)%a; }
      if(p==0){ cout<<"YES\n"; }
      else{  cout<<"NO\n";}

    return 0;
}



