#include<bits/stdc++.h>
using namespace std;
long long poww(int n)
{
long long k=1;
while(n--){  k*=2; }
return k;

}
int main()
{
int n,i,j,k,m,o,p,t;
cin>>t;
while(t--)
{
cin>>n>>k;
m=n*2*4;
m=sqrt(m);
m=(m-1)/2;
while(  ((m+1)*(m+2))/2<=n){cout<<m<<"ooo"; m++; }
cout<<m<<"  "<<(m*(m+1))/2<<"\n";
if(k<m){m=k;}

cout<<poww(m)<<"\n";

}


return 0;
}
