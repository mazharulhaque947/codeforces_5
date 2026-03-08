// drift away
#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[100],b[100],i,j,k,n,m,l,o,p,v,u,t;
string q;
cin>>t;
while(t--)
{
cin>>q;
n=q.size();
o=0;
l=0;
m=0;
k=0;
if(q[0]=='<'){  k=1; }
else if(q[0]=='>'){  k=2; }

for(i=0;i<n;i++){
p=0;
if(q[i]=='<'){  p=1; }
else if(q[i]=='>'){  p=2; }
if(k==p){ m++; }
else{ a[l]=k; k=p; b[l]=m;m=1;  l++;
if(a[l-1]==0&&b[l-1]>1){ o=1; }}
if(i==n-1){  a[l]=k; k=p; b[l]=m;m=1;  l++;
if(a[l-1]==0&&b[l-1]>1){ o=1; }}

}

//for(i=0;i<l;i++){ cout<<a[i]<<" "<<b[i]<<"\n"; }
u=0;
for(i=0;i<l;i++){  if(a[i]==2&&u==0){ u=-1;  }  if(u==-1&&a[i]==1){ u=1;}
if(a[i]==0){    if(i>0){ if(a[i-1]==2){ o=1; } }
 if(i<n-1){ if(a[i+1]==1){o=1;}}  }
}
if(u==1){o=1;  }
u=0;
if(o!=1){ if(l==1){  for(i=0;i<l;i++){u=u+b[i];  } }
else if(l==2&&a[0]!=0&&a[1]!=0){ u=b[0]; if(b[1]>u){u=b[1];} }
else if(l==2){  for(i=0;i<l;i++){u=u+b[i]; } }
else{  u=b[0]+b[1]; if(u<b[1]+b[2]){ u=b[1]+b[2];  }  }
}

if(o==1){ cout<<-1<<"\n";   }
else{    cout<<u<<"\n";}
}
return 0;
}
