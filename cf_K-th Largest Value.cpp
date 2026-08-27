#include<bits/stdc++.h>
using namespace std;

int main()
{
int i,j,k,l,m,n,o,q,p,t,a[200];
cin>>n>>q;
o=0;
for(i=0;i<n;i++){cin>>a[i]; o+=a[i];   }
while(q--){  
cin>>p>>m;

 if(p==1){ if(a[m-1]==1){o--;   } else{ o++; } a[m-1]=1-a[m-1]; 
 }  
else{

  if(m<=o){  cout<<1<<"\n"; }
else{  cout<<0<<"\n"; }
}


 }


return 0;
}