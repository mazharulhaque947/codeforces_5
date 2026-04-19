//2048 Game
#include<bits/stdc++.h>
using namespace std;

int lnn(int n)
{
int i,j,k;
k=1;
i=0;
while(n>k){ k=k*2; i++;  }
return i;
}

int main()
{
int a[100],b[12],i,j,k,n,m,l,t,o,p;
cin>>t;
while(t--)
{
cin>>n;
for(i=0;i<=11;i++){ b[i]=0;   }
for(i=0;i<n;i++){ cin>>a[i]; k=lnn(a[i]);

 if(k<=11){b[k]++; }  }

k=1;
for(i=11;i>=0;i--){  k=k-b[i]; if(k<=0){  k=0 ; break;} k=k*2;  }
if(k==0){  cout<<"YES\n"; }
else{  cout<<"NO\n"; }
}
return 0;
}