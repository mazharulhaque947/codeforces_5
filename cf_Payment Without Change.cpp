//Payment Without Change

#include<bits/stdc++.h>
using namespace std;
int main()
{
int  a,b,c,i,j,k,n,m,s,t;
cin>>t;
while(t--)
{
cin>>a>>b>>n>>s;
m=s/n;
if(m<=a){ s=s%n; }
else{   s=s-n*a; }
if(s<=b){ cout<<"YES\n";   }
else{ cout<<"NO\n";   }
}
return 0;
}
