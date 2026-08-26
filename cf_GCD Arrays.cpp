
#include<bits/stdc++.h>
using namespace std;

int main()
{
int i,j,k,l,m,n,o,p,t;
cin>>t;
while(t--)
{
cin>>l>>k>>m;
if(k-l==0){ if(l==1){ cout<<"NO\n";  }else{  cout<<"YES\n"; }  }

else{
n=k-l+1;
if(n%2){ n++;   }
n/=2;
if(m>=n){ cout<<"YES\n";  }else{  cout<<"NO\n";}

}

}
return 0;
}
