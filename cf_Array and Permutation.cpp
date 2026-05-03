#include<bits/stdc++.h>
using namespace std;
int main()
{
int b[2000],c[4000],i,j,k,l,m,n,o,p,t,x,y,u,v,bl,bm,mm;
vector<pair<int,int>>a;
cin>>t;
while(t--)
{
a.clear();
cin>>n;
for(i=0;i<n;i++){cin>>k; a.push_back({k,i});   }
for(i=0;i<n;i++){ cin>>k; b[i]=k;   }
//sort vector of pair by first data
sort(a.begin(),a.end(), [](const auto &a,const auto &b){  return a.first<b.first ;});

k=l=m=o=0;
for(i=0;i<n;i++){
if(b[i]==b[k]){ m++;  }
else{o=o+m; c[2*l]=b[k]; c[2*l+1]=o; m=1; k=i;l++;  }
if(i==n-1){ o=o+m; c[2*l]=b[k]; c[2*l+1]=o; m=1; k=i;l++;  }
 }
x=1;
for(i=0;i<l;i++){ for(j=i+1;j<l;j++){
 if(c[2*i]==c[2*j]){  x=0; break; } } if(x==0){break;} }
//for(j=0;j<n;j++){ if(a[j].first==c[2*0]){  break;}  }
//y=a[j].second;

bl=0;
bm=n;
u=-1;
while(bm>=bl){
    mm=(bm-bl)/2;
    mm=mm+bl;
    if(a[mm].first==c[2*0]){u=a[mm].second;break;}
    else if(a[mm].first<c[2*0]){ bl=mm+1; }
    else{ bm=mm-1; }

}
y=u;
for(i=1;i<l;i++){
//for(j=0;j<n;j++){ if(a[j].first==c[2*i]){ break;}  }
bl=0;
bm=n;
u=-1;
while(bm>=bl){
    mm=(bm-bl)/2;
    mm=mm+bl;
    if(a[mm].first==c[2*i]){u=a[mm].second;break;}
    else if(a[mm].first<c[2*i]){ bl=mm+1; }
    else{ bm=mm-1; }

}

//cout<<y<<" "<<u<<"\n";
if(y>u){  x=0;  break; }
else{ y=u ;}
}
if(x==1){ cout<<"YES\n"; }
else{ cout<<"NO\n";  }
}
return 0;
}

