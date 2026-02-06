#include<bits/stdc++.h>

using namespace std;

int main()
{
int i,j,k,l,m,n,t;
cin>>t;
while(t--)
{
vector<int>a(100,0);
cin>>k>>l;
for(i=k-1;i<l;i++){ a[i]++; }

cin>>k>>l;
for(i=k-1;i<l;i++){ a[i]++; }
m=0;

for(i=0;i<100;i++){ if(a[i]==2){m++;} }
m--;
for(i=0;i<99;i++){ if(a[i]==2&&a[i+1]==1){m++; break;} }
for(i=0;i<99;i++){ if(a[i]==1&&a[i+1]==2){m++; break;} }
if(m<=0){m=1;}
cout<<m<<"\n";

}

return 0;
}
