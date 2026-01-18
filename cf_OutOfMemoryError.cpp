#include<bits/stdc++.h>
#define int long long
using  namespace std;
int32_t main(){
int a[200],b,c,h,n,m,i,j,s[200][2],t,u;
cin>>t;
while(t--){
  cin>>n>>m>>h;
  for(i=0;i<n;i++){cin>>a[i];s[i][0]=s[i][1]=0;}
  u=0;
  for(i=0;i<m;i++){cin>>b>>c;
    if(u==s[b-1][1]){s[b-1][0]+=c;}
    else{s[b-1][0]=c;s[b-1][1]=u;}
    if(s[b-1][0]+a[i]>h){u++;s[b-1][0]=0;s[b-1][1]=u;}
    }
  for(i=0;i<n;i++){if(u==s[i][1]){cout<<a[i]+s[i][0]<<" ";} else{cout<<a[i]<<" ";} }cout<<"\n";
}
return 0;}

