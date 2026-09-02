
#include<bits/stdc++.h>
using namespace std;

int main()
{
string  a[50],b[50];
char c;
int i,j,k,l,m,n,o,p,t;
cin>>t;

while(t--)
{
cin>>n>>m;
for(i=0;i<n;i++){  cin>>a[i]; b[i]=string(100,'.'); }
p=-1;o=0;
for(i=0;i<n;i++){   for(j=0;j<m;j++){

 if(a[i][j]!='.'){  p=i; o=j; break;   } } if(p!=-1){ break; } }

 if(p!=-1){

l=0;
if(o%2){ l=1;  }
if(p%2){  l=1-l; }
c=a[p][o];
 }
 else{ c='W';  l=0; }
for(i=0;i<n;i++){

   for(j=0;j<m;j++){

 if(a[i][j]!='.'){
b[i][j]=a[i][j];
if( l%2){   if(a[i][j]==a[p][o]){ l=-1; break;  }      }
else{   if(a[i][j]!=a[p][o]){ l=-1; break;  } }
 }
else{
if(l%2==0){    b[i][j]=c;  }
else{   if(c=='R'){ b[i][j]='W';  }else{ b[i][j]='R';  }  }
}
l++;
}
if(m%2==0){  l++; }

if(l==-1){ break; }

}


for(i=0;i<n;i++){

    for(j=0;j<m;j++){


        if(j-1>=0&& b[i][j-1]==b[i][j]){ l=-1; break; }
       if(j+1<m&& a[i][j+1]==b[i][j]){ l=-1; break; }
       if(i-1>=0&& b[i-1][j]==b[i][j]){ l=-1; break; }
       if(i+1<n&& b[i+1][j]==b[i][j]){ l=-1; break; }

    }

    if(l==-1){ break; }
}


if(l==-1){ cout<<"NO\n";  }
else{







cout<<"YES\n";
for(i=0;i<n;i++){
  for(j=0;j<m;j++){ cout<<b[i][j];  }
cout<<"\n";
}


}
}


return 0;
}
