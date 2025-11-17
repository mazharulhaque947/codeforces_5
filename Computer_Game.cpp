#include<bits/stdc++.h>
using namespace std;
int main()
{
int i,j,k,l,n,t;
string a,b;
cin>>t;
while(t--){
cin>>n;
cin>>a;
cin>>b;
k=1;
for(i=0;i<n;i++){

if(a[i]=='1'&&b[i]=='1'){ k=0; break;   }

}
if(k==1){  cout<<"YES\n"; }
else{ cout<<"NO\n";   }

}
return 0;
}
