//Carrot Cakes
#include<bits/stdc++.h>
using namespace std;
int main()
{
int n,k,l,m,i,j,o,p,t,d;
cin>>n>>t>>k>>d;
o=n/k;
if(o*k!=n){ o++; }
o--;
if(o*t>d){ cout<<"YES\n";}
else{  cout<<"NO\n"; }
return 0;
}
