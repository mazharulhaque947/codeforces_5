#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{int i,j,k,n,l,m,o,t,p;
string c;
cin>>t;
while(t--)
{
cin>>c;
//char a[200001][200002];
map<pair<int,int>,int>a;
a[{100000,100000}]=1;
o=p=100000;
n=strlen(c);
m=0;
for(i=0;i<n;i++){
   if(c[i]=='S'){ p--;  }
   else if(c[i]=='N'){ p++; }
   else if(c[i]=='W'){ o--;}
   else{ o++;}
if(a[{o,p}]==1){ m++; }
else{ m+=5;  }
a[{o,p}]=1;


  }
cout<<m<<"\n";

}

return 0;
}
