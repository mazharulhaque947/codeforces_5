#include<bits/stdc++.h>
using namespace std;
typedef struct node{
int a;
struct node *b;
} ptr;
ptr *fst(int u)
{
ptr* w=(ptr*)malloc(sizeof(ptr));
w->b=NULL;
w->a=u;
return w;

}
void adf(ptr *&p, int n){
ptr* w=(ptr*)malloc(sizeof(ptr));
w->a=n;
w->b=p;
p=w;

}
void pr(ptr *p)
{
while(p!=NULL){  cout<<p->a<<" "; p=p->b; }
}
int main()
{


//for(int i =0;i<4;i++){   if(a[i].first==0){  a[i].second=fst(i); }
//else{ adf(a[i].second,i);   }   }
int c[100],d[100],i,j,k,n,m,p,o,x,l,nn,t;
cin>>t;
while(t--){
        nn=100;
vector<pair<int,ptr*>>a(nn,{0,NULL});
cin>>n>>k>>x;
l=0;
for(i=0;i<n;i++){ cin>>c[i];
if(a[0].first==0){ d[l]=0;l++; a[0].second=fst(c[i]); }
else{ adf(a[0].second,c[i]);   }
 }
sort(c,c+n);
for(i=0;i<c[0];i++){
if(a[c[0]-i].first==0){ d[l]=c[0]-i;l++;  a[c[0]-1].second=fst(i); }
else{ adf(a[c[0]-i].second,i);   }
a[c[0]-i].first++;
 }
for(i=c[n-1]+1;i<=x;i++){
if(a[i-c[n-1]].first==0){  d[l]=i-c[n-1];l++;a[i-c[n-1]].second=fst(i); }
else{ adf(a[i-c[n-1]].second,i);   }
a[i-c[n-1]].first++;
 }

for(i=0;i<n-1;i++){

  for(j=c[i]+1;j<c[i+1];j++){
     if(j-c[i]<=c[i+1]-j){
if(a[j-c[i]].first==0){ d[l]=j-c[i];l++;  a[j-c[i]].second=fst(j); }
else{ adf(a[j-c[i]].second,j);   }
a[j-c[i]].first++;

  }
    else{
  if( a[c[i+1]-j].first==0  ){d[l]=c[i+1]-j;l++;  a[c[i+1]-j].second=fst(j); }
else{ adf(a[c[i+1]-j].second,j);   }
a[c[i+1]-j].first++;

 }

}

}

for(i=0;i<l;i++){  cout<<d[i]<<"<<<<< "; }
cout<<"\n";

}



return 0;
}
