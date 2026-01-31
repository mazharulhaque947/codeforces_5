#include<bits/stdc++.h>
using namespace std;

void m(int a[],int n,int *p){
   if(n>0){  m(a,n-1,p); if(a[*p]<a[n]){*p=n;} }


}
int main(){
int i,n,a[100],l;
cin>>n;
l=0;
for(i=0;i<n;i++){ cin>>a[i]; }
m(a,n-1,&l);
//cout<<l<<"\n";
cout<<a[ l ];
return 0;
}
