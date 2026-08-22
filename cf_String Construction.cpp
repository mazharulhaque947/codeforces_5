#include<bits/stdc++.h>
using namespace std;

int main()
{
int o,p,i,j,k,l,m,n,s,t,a[100];
string q;
cin>>t;
while(t--)
{
cin>>n>>s;
//cin>>q;

if(n-2<s){  cout<<-1<<"\n"; }
else{
l=n-2-s;
m=0;
for(i=0;i<l;i++){a[i]= m; m=1-m;  }
for(i=l-1;i>=0;i--){ cout<<a[i];  }
for(i=0;i< n/2 - l/2 ;i++){  cout<<1; }
for(i=0;i< n/2 +n%2- l/2 -l%2  ;i++){  cout<<0; }
cout<<"\n";
}

}

return 0;
}
