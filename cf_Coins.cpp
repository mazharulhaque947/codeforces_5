#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[6],i,j,k,n,m,o,p;
char c[4];
for(i=0;i<6;i++){a[i]=0;}
j=k=0;
for(i=0;i<3;i++){ cin>>c; if(c[1]=='<'){a[2*(c[0]-65)+1]++;a[2*(c[2]-65)+0]++;}else{a[2*(c[0]-65)+0]++;a[2*(c[2]-65)+1]++; }  }
p=o=0;
for(i=0;i<3;i++){if(a[2*i+1]==1){p=0;}else{p=1;}if(a[2*i+0]==1){}else{o=1;}
if(a[2*i+1]==2){j=i;}if(a[2*i]==2){k=i;}}
//cout<<j<<" "<<k;
c[0]=65+j;
c[1]=65+3-j-k;
c[2]=65+k;
if(p==0&&o==0){cout<<"impossible";}

else{cout<<c[0]<<c[1]<<c[2];}
return 0;
}

