
#include<bits/stdc++.h>
using namespace std;

int main()
{
int a[100],b[100],c[100],i,j,k,l,n,m,t,o,p;
cin>>t;
while(t--)
{
cin>>n>>k;
for(i=0;i<n;i++){  cin>>a[i]>>b[i]; }
c[0]=0;
l=1;
o=0;
while(o<l){
for(i=0;i<n;i++){
m=a[c[o]]-a[i]; if(m<0){m=m*-1;}
  p=b[c[o]]-b[i]; if(p<0){ p=p*-1;  }
 m=m+p;
if(m<=k){
     p=0;
   for(j=0;j<l;j++){ if(i==c[j]){p=1; break;  }    }
 if(p==0){ c[l]=i; l++; }
 }
}
o++;
}
sort(c,c+l);
for(i=0;i<l;i++){cout<<c[i]<<" ";}
p=1;
if(l<n){ p=0;  }
for(i=1;i<l;i++){ if(c[i]!=c[i-1]+1){ p=0; break;  }   }
if(p==0){ cout<<"-1\n";  }
else{ cout<<"1\n"; }
}
return 0;
}
