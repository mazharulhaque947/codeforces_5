#include<bits/stdc++.h>

using namespace std;

int main()
{
int i,j,k,l,m,n,t;
cin>>t;
while(t--)
{
vector<int>a;
cin>>k;
l=0;
for(i=0;i<k;i++){ cin>>m; a.push_back(m);if(i>0){l=a[i]-a[i-1];}}

if(k<2){cout<<"YES\n";}
else if(k==2&&l>1){ cout<<"YES\n";}
else{cout<<"NO\n";}
a.clear();
}

return 0;
}
