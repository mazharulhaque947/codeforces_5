#include<bits/stdc++.h>

using namespace std;

int main()
{
int i,j,k,l,m,n,t;
cin>>t;
while(t--)
{
vector<int>a;
cin>>n>>k;
l=0;
for(i=0;i<n;i++){ cin>>m; a.push_back(m);}
sort(a.begin(),a.end());
m=0;
for(i=n-1;i>=0;i--){ if(l==0){m=m+a[i];}else{m=m-a[i];if(k==0){} if(m<=k){k=k-m; m=0;}else{m=m-k;k=0;}}   l=1-l;}
cout<<m<<"\n";
a.clear();
}

return 0;
}

